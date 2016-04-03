<?php
/**
 * @file
 *  Taxonomy Industry Tags migration.
 */

class SBPMigrationWizardSections extends SBPMigrationTerm {

  public function __construct($arguments) {
    
    $this->setProperties('business_portal_wizard_sections');
    parent::__construct($arguments);
    $this->description = t('Import Industry Tag terms.');
    $this->addFieldMapping('field_color', 'color');
    $this->addFieldMapping('field_jurisdiction', 'jurisdiction');
    $this->addImageFieldMappings('field_image');
  }

  function csvcolumns() {
    $columns = parent::csvcolumns();
    $columns[] = array('color', 'Color');
    $columns[] = array('icon', 'Icon');
    $columns[] = array('jurisdiction', 'Jurisdiction');
    return $columns;
  }

}