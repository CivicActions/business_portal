<?php
/**
 * @file
 *  Business Portal Landing Page migration.
 * 
 * No custom imports necessary at this point.
 */

class LABPMigrationNodeSBPWizardScreen extends LABPMigrationNode {

  public function __construct($arguments) {
    $this->setProperties('sbp_wizard_screen');
    $this->useTags = FALSE;
    $this->useImage = FALSE;
    parent::__construct($arguments);
    $this->description = t('Import Wizard Screens.');
    $this->addFieldMapping('field_anchor_name', 'anchor_name');
    $this->addFieldMapping('field_description', 'description');
    $this->addFieldMapping('field_section', 'section');
    $this->addFieldMapping('field_weight', 'weight');
    $this->addFieldMapping('field_button', 'button');
  }

  function csvcolumns() {
    $columns = parent::csvcolumns();
    $columns[] = array('anchor_name', 'Anchor Name');
    $columns[] = array('description', 'Description');
    $columns[] = array('section', 'Section');
    $columns[] = array('weight', 'Weight');
    $columns[] = array('button', 'Button(s)');
    return $columns;
  }
}