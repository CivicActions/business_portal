# business_portal
Business Portal Drupal Distro

## DrupalVM set up

1. Install vagrant and virtualbox
1. Clone repository into `~/Projects` directory
1. `cd ~/Projects/business_portal/box`
1. `vagrant plugin install autonetwork`
1. `vagrant plugin install host-updater`
1. `sudo ansible-galaxy install -r provisioning/requirements.yml --force`
1. `vagrant up`
1. `vagrant ssh`
1. Visit labp.local on your browser