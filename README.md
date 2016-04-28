# LA Business Portal
Business Portal Drupal Distro

## DrupalVM dependencies
1. Ansible - This is an automation tool that can be installed from pip with the following instructions:
http://docs.ansible.com/ansible/intro_installation.html#latest-releases-via-pip . Make sure you have version 2.0.2.0 or later.
1. Vagrant - This is a VM operations tool that can be downloaded: https://www.vagrantup.com/downloads.html
1. VirtualBox - This is a VM hypervisor that can be downloaded: https://www.virtualbox.org/wiki/Downloads
1. If you're not on a Mac: your BIOS must have Virtualization enabled.  [Here's a guide for Lenovo](http://amiduos.com/support/knowledge-base/article/enabling-virtualization-in-lenovo-systems)

## DrupalVM set up

1. Install vagrant and virtualbox
1. Clone repository into `~/Projects` directory
1. `cd ~/Projects/business_portal/box`
1. `vagrant plugin install vagrant-auto_network`
1. `vagrant plugin install vagrant-hostsupdater`
1. `sudo ansible-galaxy install -r provisioning/requirements.yml --force`
Note: If you are running Ubuntu with an encrypted hard drive, you will need to update `config.yml` to use rsync instead of nsf.
Later on, you'll need to run `vagrant rsync-auto` to automatically sync file changes.    
1. `vagrant up`
1. `vagrant ssh`
1. Install the profile with `drush @labp.dev si labp --account-name=admin --account-pass=admin` or `bash ~/Projects/business_portal/assets/install-local-drupalvm.sh`
1. Visit labp.dev on your browser


## DrupalVM usage

1. If you have Drush installed on your host machine, DrupalVM will automatically set up an alias
`@labp.labp.dev` to interact with DrupalVM
1. If you require SSH access to access logs, manually alter system configuration, or access other tools
in the VM, run `vagrant ssh` from the box directory after set up



## Using the example database

All steps below are assumed to be run from the command line

### Step 1. Clear out your database
`drush sql-drop -y`

### Step 2. Load prod database
`drush sql-cli < /assets/labp-2016-04-27T17-37-57.sql`

### Step 3. Enable stage file proxy
`drush en stage_file_proxy -y`

### Step 4. Disable Acquia Cloud Site Factory module
`drush dis acsf -y`

### Step 5. Login as admin
`drush uli`

### Step 6. Configure stage file proxy
- Go to `admin/config/system/stage_file_proxy`  
- Enter `http://labp.cityofla.acsitefactory.com` for origin
- Enter `sites/g/files/wph521/f` for the directory

### Step 7. Change back to the development solr server
- Go to `admin/config/search/search_api`
- Enable `LABP VM` by clicking `Enable` under `Operations`
- Disable `Acquia Search` by clicking `Disable` under `Operations`
- Switch the server to LABP VM by clicking `Edit` under `Operations` for `Default node index`
- Switch the server to LABP VM by clicking `Edit` under `Operations` for `Resources & Incentives`

### Step 8. Switch theme back to profile theme
- `drush dis labusinessportaltheme -y`
- `drush vset theme_default lasbptheme`

### Step 9. Clear cache
`drush cc all`


## Compass and SASS installation with Bundler

Note: The directories below assume you are running gem from your local computer.

If running from Outside DrupalVM, please substitute `/var/www/labp` with `~/Projects/business_portal/docroot`.

### Step 1. Install bundler
```bash
cd /var/www/labp/docroot/profiles/labp/themes/la/lasbptheme
gem install bundler
```
Please use `sudo gem install bundler` when running on DrupalVM

### Step 2. Install required gems
``` bash
bundle install
```

### Step 3. Clean compass from the bundle
``` bash
bundle exec compass clean
```

### Step 4. Execute compass from the bundle
``` bash
bundle exec compass compile
```
### Step 5. Configure Solr
- `bash /assets/configure-solr.sh`

## Bundler and Zen Grids known compile issues

There is an ongoing issue with compiling Zen grids into CSS using Compass. It should have been fixed
in this issue https://www.drupal.org/node/2346291 by following the above instructions but it still has problems.
We need to compile the SASS using our global gem versions. Update to the following versions of Compass and Sass

* Compass 1.0.3
* SASS 3.4.20

From your theme folder, run
``` bash
compass watch
```
