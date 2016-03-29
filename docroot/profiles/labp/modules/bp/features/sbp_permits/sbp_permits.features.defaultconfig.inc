<?php
/**
 * @file
 * sbp_permits.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function sbp_permits_defaultconfig_features() {
  return array(
    'sbp_permits' => array(
      'field_default_fields' => 'field_default_fields',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function sbp_permits_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'comment-comment_node_sbp_permit-comment_body'.
  $fields['comment-comment_node_sbp_permit-comment_body'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(
        0 => 'comment',
      ),
      'field_name' => 'comment_body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'comment_node_sbp_permit',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'quickedit' => array(
              'editor' => 'plain_text',
            ),
          ),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'comment',
      'field_name' => 'comment_body',
      'label' => 'Comment',
      'required' => TRUE,
      'settings' => array(
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_sbp_permit_documents-field_document'.
  $fields['field_collection_item-field_sbp_permit_documents-field_document'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_document',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => 0,
      'module' => 'file',
      'settings' => array(
        'display_default' => 1,
        'display_field' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'field_sbp_permit_documents',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(
            'quickedit' => array(
              'editor' => 'form',
            ),
          ),
          'type' => 'file_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_document',
      'label' => 'Document',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => '',
        'file_extensions' => 'pdf',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'oembed' => 0,
            'public' => 'public',
          ),
          'allowed_types' => array(
            'audio' => 0,
            'document' => 'document',
            'image' => 0,
            'video' => 0,
          ),
          'browser_plugins' => array(
            'media_default--media_browser_1' => 0,
            'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
            'media_internet' => 'media_internet',
            'upload' => 'upload',
          ),
        ),
        'type' => 'media_generic',
        'weight' => 2,
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_sbp_permit_documents-field_title'.
  $fields['field_collection_item-field_sbp_permit_documents-field_title'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_title',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_sbp_permit_documents',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'quickedit' => array(
              'editor' => 'plain_text',
            ),
          ),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_title',
      'label' => 'Title',
      'required' => 0,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 1,
      ),
    ),
  );

  // Exported field: 'node-permit-field_sbp_permit_documents'.
  $fields['node-permit-field_sbp_permit_documents'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sbp_permit_documents',
      'foreign keys' => array(),
      'indexes' => array(
        'revision_id' => array(
          0 => 'revision_id',
        ),
      ),
      'locked' => 0,
      'module' => 'field_collection',
      'settings' => array(
        'hide_blank_items' => 0,
        'path' => '',
      ),
      'translatable' => 0,
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'permit',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'alternate' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'quickedit' => array(
              'editor' => 'form',
            ),
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => 9,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'thumbnail' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_sbp_permit_documents',
      'label' => 'Permit Documents',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => 10,
      ),
    ),
  );

  // Exported field: 'node-permit-field_sbp_permit_licence_name'.
  $fields['node-permit-field_sbp_permit_licence_name'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sbp_permit_licence_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'permit',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'alternate' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'quickedit' => array(
              'editor' => 'plain_text',
            ),
          ),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'thumbnail' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_sbp_permit_licence_name',
      'label' => 'Permit/Licence Name',
      'required' => 0,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 1,
      ),
    ),
  );

  // Exported field: 'node-permit-field_sbp_permit_tags'.
  $fields['node-permit-field_sbp_permit_tags'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_sbp_permit_tags',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'permit_tags',
            'parent' => 0,
          ),
        ),
      ),
      'translatable' => 0,
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'permit',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'alternate' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(
            'quickedit' => array(
              'editor' => 'form',
            ),
          ),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 5,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'thumbnail' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_sbp_permit_tags',
      'label' => 'Permit Tags',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => 6,
      ),
    ),
  );

  // Exported field: 'node-sbp_permit-body'.
  $fields['node-sbp_permit-body'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'sbp_permit',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'alternate' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'quickedit' => array(
              'editor' => 'plain_text',
            ),
          ),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'quickedit' => array(
              'editor' => 'form',
            ),
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
        'thumbnail' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => 41,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Comment');
  t('Document');
  t('Permit Documents');
  t('Permit Tags');
  t('Permit/Licence Name');
  t('Title');

  return $fields;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function sbp_permits_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node sbp_permit defaults'.
  $permissions['administer panelizer node sbp_permit defaults'] = array(
    'name' => 'administer panelizer node sbp_permit defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create sbp_permit content'.
  $permissions['create sbp_permit content'] = array(
    'name' => 'create sbp_permit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sbp_permit content'.
  $permissions['delete any sbp_permit content'] = array(
    'name' => 'delete any sbp_permit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sbp_permit content'.
  $permissions['delete own sbp_permit content'] = array(
    'name' => 'delete own sbp_permit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any sbp_permit content'.
  $permissions['edit any sbp_permit content'] = array(
    'name' => 'edit any sbp_permit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sbp_permit content'.
  $permissions['edit own sbp_permit content'] = array(
    'name' => 'edit own sbp_permit content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
