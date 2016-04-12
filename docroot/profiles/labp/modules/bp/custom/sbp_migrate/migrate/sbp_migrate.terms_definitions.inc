<?php
/**
 * @file
 *  Taxonomy Industry Tags migration.
 */

class SBPMigrationTermTermsDefinitions extends SBPMigrationTerm {

  public function __construct($arguments) {
    $this->setProperties('terms_definitions');
    parent::__construct($arguments);
    $this->description = t('Import Terms and Definitions terms.');
  }

  function csvcolumns() {
    $columns = parent::csvcolumns();
    return $columns;
  }

}