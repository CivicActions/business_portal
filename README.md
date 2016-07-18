# LA Business Portal
Business Portal Drupal Distro

## Developer Workflow

We are using the conventional Fork and Pull development workflow, which is common for teams working with 
Github repositories. 

Developers will have two remotes on their local repository, 1. the developer's fork, 2. the upstream repository.

Pull requests will be submitted from their fork into the upstream repository. This will be reviewed by a peer, 
any comments left on the pull request need resolved, and then the pull request can be merged. The merge will 
stage the pull request code for the daily deployments facilitated by ITA and CivicActions.

Github outlines this process well in their documentation:
1. https://help.github.com/articles/fork-a-repo/
2. https://help.github.com/articles/using-pull-requests/

## Sandbox

We have instructions below for a sandbox solution built with DrupalVM. This can be used for a local setup 
and help affords consistency in our development operations. It's a recommendation, but not a requirement.

## DrupalVM dependencies
1. Ansible - This is an automation tool that can be installed from pip with the following instructions:
http://docs.ansible.com/ansible/intro_installation.html#latest-releases-via-pip . *Make sure you have version 2.0.2.0 or later.*
1. Vagrant - This is a VM operations tool that can be downloaded: https://www.vagrantup.com/downloads.html. *Make sure you have version 1.8.1* 
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

If you receive a permissions error on the `.ansible_galaxy` file in your home directory on OSX, follow these steps:
1. open a Finder window
1. right click on the file
1. click Get Info
1. click the lock icon in the bottom right corner and type your OSX admin password
1. add your user and select read & write permissions
1. Follow steps below for rebuilding your VM

## Rebuilding your VM

1. Go to the `box` directory 
1. `vagrant destroy -f` 
1. `vagrant up`


## DrupalVM usage

1. If you have Drush installed on your host machine, DrupalVM will automatically set up an alias
`@labp.labp.dev` to interact with DrupalVM
1. If you require SSH access to access logs, manually alter system configuration, or access other tools
in the VM, run `vagrant ssh` from the box directory after set up


## Using the example database

All steps below are assumed to be run from the command line

### Step 0. While inside your VM (vagrant ssh), move to the labp directory
`cd /var/www/labp`

### Step 1. Clear out your database
`drush sql-drop -y`

### Step 2. Load prod database
`drush sql-cli < /assets/FULL-2016-06-22T12-28-51.sql`

### Step 3. Enable stage file proxy
`drush en stage_file_proxy -y`

### Step 4. Disable Acquia modules
`drush dis acsf -y`
`drush dis acquia_spi -y`
`drush dis acquia_search_multi_subs -y`

### Step 5. Login as admin
`drush uli`

### Step 6. Configure stage file proxy
- Go to `admin/config/system/stage_file_proxy`  
- Enter `http://labp.cityofla.acsitefactory.com` for origin
- Enter `sites/g/files/wph521/f` for the directory
- Save configuration.

### Step 7. Change back to the development solr server
- Go to `admin/config/search/search_api`
- Enable `LABP VM` by clicking `Enable` under `Operations` (might already be enabled)
- Disable `Acquia Search` by clicking `Disable` under `Operations`
- Switch the server to LABP VM by clicking `Edit` under `Operations` for `Default node index`
- Switch the server to LABP VM by clicking `Edit` under `Operations` for `Resources & Incentives`

### Step 8. Clear cache
`drush cc all`


## Compass and SASS installation with Bundler
Since Zen grids requires a specific set of versions for Compass/SASS/Zen grids gems, it is advisable to compile the SASS files with bundler.
Using `compass watch` results in unreliable zen grids width calculations.

Note: The directories below assume you are running gem from your local computer.

If running from Outside DrupalVM, please substitute `/var/www/labp` with `~/Projects/business_portal/docroot`.

### Step 1. Install bundler
```bash
cd /var/www/labp/docroot/profiles/labp/themes/la/labusinessportaltheme
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

### Step 5. Start a compass watch task
``` bash
bundle exec compass watch
```

### Step 6. Configure Solr
- `bash /assets/configure-solr.sh`



