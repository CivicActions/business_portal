<?php
/**
 * @file
 *  Taxonomy Industry Tags migration.
 */

class SBPMigrationWizardSectionsTags extends SBPMigrationTerm {

  public function __construct($arguments) {
    $this->setProperties('business_portal_wizard_sections');
    parent::__construct($arguments);
    $this->description = t('Import Industry Tag terms.');
  }

  function csvcolumns() {
    $columns = parent::csvcolumns();
    return $columns;
  }

}
