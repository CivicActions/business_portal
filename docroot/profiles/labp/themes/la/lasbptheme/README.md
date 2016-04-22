# Business Portal Compass and SASS installation with Bundler

### Step 1. Install bundler
```bash
cd ~/workspace/fcc/docroot/sites/all/themes/fcc
gem install bundler
```
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
