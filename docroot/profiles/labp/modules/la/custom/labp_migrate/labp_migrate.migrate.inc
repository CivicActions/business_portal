<?php

/**
 * @file
 *  Base migrations used in LABP.
 */

require_once drupal_get_path('module', 'sbp_migrate') . '/sbp_migrate.migrate.inc';
require_once drupal_get_path('module', 'sbp_migrate') . '/migrate/field_button.inc';

/**
 * Wizard Screen migration for LABP.
 */
class LAPMigrationSBPWizardScreen extends SBPMigrationSBPWizardScreen {
  // Set module to labp_migrate
  protected function setProperties($bundle, $module = 'labp_migrate') {
    parent::setProperties($bundle, $module);
  }
}

/**
 * Base term migration for LABP.
 * 
 */
class LABPMigrationWizardSections extends SBPMigrationWizardSections {
  // Set module to labp_migrate
  protected function setProperties($bundle, $module = 'labp_migrate') {
    parent::setProperties($bundle, $module);
  }
}

/**
 * Field Button migration for LABP.
 * 
 */
class LABPMigrationFieldButton extends SBPMigrationFieldButton {
  // Set module to labp_migrate
  protected function setProperties($bundle, $module = 'labp_migrate') {
    parent::setProperties($bundle, $module);
  }
}
