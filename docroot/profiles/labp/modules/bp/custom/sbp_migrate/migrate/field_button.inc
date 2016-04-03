<?php

/**
 * Base migration for Field Content Components.
 */
class SBPMigrationFieldButton extends SBPMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);
    
    $this->description = t('Button Field Collection migration from CSV source.');
    $this->setProperties('field_button');
    $this->useTags = FALSE;

  // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($this->getImportFilePath(), $this->csvcolumns(), array('header_rows' => 1));

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationFieldCollection::getKeySchema()
    );
        
    $this->addFieldMapping('field_title', 'title');
    $this->addFieldMapping('field_anchor_name', 'anchor_name');
    $this->addFieldMapping('field_information_text', 'info');
  }
  function csvcolumns() {
    $columns[] = array('title', 'Title');
    $columns[] = array('anchor_name', 'Anchor Name');
    $columns[] = array('info', 'Information');
    return $columns;
  }

}
