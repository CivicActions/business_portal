<?php
/**
 * @file
 *  Business Portal Wizard Screen migration.
 * 
 */

class SBPMigrationSBPWizardScreen extends SBPMigrationNode {

  public function __construct($arguments) {
    $this->setProperties('sbp_wizard_screen');
    $this->useTags = FALSE;
    $this->useImage = FALSE;
    parent::__construct($arguments);
    $this->description = t('Import Wizard Screens.');
    $this->addFieldMapping('field_screen_id', 'screen_id');
    $this->addFieldMapping('field_section', 'section')
        ->sourceMigration('SBPMigrationWizardSections');
    $this->addFieldMapping('field_section:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_description', 'description');
    $this->addFieldMapping('field_tip', 'tip');
    $this->addFieldMapping('field_road_map', 'road_map');
    $this->addFieldMapping('field_weight', 'weight');
  }

  function csvcolumns() {
    $columns = parent::csvcolumns();
    $columns[] = array('screen_id', 'Screen Name');
    $columns[] = array('section', 'Section');
    $columns[] = array('description', 'Description');
    $columns[] = array('tip', 'Tip');
    $columns[] = array('road_map', 'Road Map');
    $columns[] = array('weight', 'Weight');
    return $columns;
  }
}