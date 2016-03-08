<?php
/**
 * @file
 * sbp_landing_page.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function sbp_landing_page_defaultconfig_features() {
  return array(
    'sbp_landing_page' => array(
      'default_page_manager_handlers' => 'default_page_manager_handlers',
      'field_default_fields' => 'field_default_fields',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_default_page_manager_handlers().
 */
function sbp_landing_page_defaultconfig_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_a5dcff65-418b-4dcd-9eaa-b4d3a5fdd737';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -97;
  $handler->conf = array(
    'title' => 'Front Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '76f25bfc-0727-4705-ac69-cd177c971da9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9c4537a3-c3d7-47ff-80ab-55bfa5c6803a';
    $pane->panel = 'center';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => array(),
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9c4537a3-c3d7-47ff-80ab-55bfa5c6803a';
    $display->content['new-9c4537a3-c3d7-47ff-80ab-55bfa5c6803a'] = $pane;
    $display->panels['center'][0] = 'new-9c4537a3-c3d7-47ff-80ab-55bfa5c6803a';
    $pane = new stdClass();
    $pane->pid = 'new-2046703c-731e-4f2e-805a-d385647556cd';
    $pane->panel = 'center';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(),
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2046703c-731e-4f2e-805a-d385647556cd';
    $display->content['new-2046703c-731e-4f2e-805a-d385647556cd'] = $pane;
    $display->panels['center'][1] = 'new-2046703c-731e-4f2e-805a-d385647556cd';
    $pane = new stdClass();
    $pane->pid = 'new-db807968-3ad8-4abd-934e-dd4ccd131b97';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'landing_page-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'db807968-3ad8-4abd-934e-dd4ccd131b97';
    $display->content['new-db807968-3ad8-4abd-934e-dd4ccd131b97'] = $pane;
    $display->panels['center'][2] = 'new-db807968-3ad8-4abd-934e-dd4ccd131b97';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_a5dcff65-418b-4dcd-9eaa-b4d3a5fdd737'] = $handler;

  return $export;
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function sbp_landing_page_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'comment-comment_node_sbp_landing_page-comment_body'.
  $fields['comment-comment_node_sbp_landing_page-comment_body'] = array(
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
      'bundle' => 'comment_node_sbp_landing_page',
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

  // Exported field: 'node-sbp_landing_page-body'.
  $fields['node-sbp_landing_page-body'] = array(
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
      'bundle' => 'sbp_landing_page',
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
        'weight' => 2,
      ),
    ),
  );

  // Exported field: 'node-sbp_landing_page-field_content'.
  $fields['node-sbp_landing_page-field_content'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_content',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => 0,
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'sbp_basic_page' => 'sbp_basic_page',
            'sbp_content' => 'sbp_content',
            'sbp_landing_page' => 'sbp_landing_page',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => 0,
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'sbp_landing_page',
      'default_value' => array(),
      'default_value_function' => '',
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
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
            'quickedit' => array(
              'editor' => 'form',
            ),
          ),
          'type' => 'entityreference_label',
          'weight' => 1,
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
      'field_name' => 'field_content',
      'label' => 'Featured Content',
      'required' => 0,
      'settings' => array(
        'behaviors' => array(
          'prepopulate' => array(
            'status' => 0,
          ),
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'entityreference',
        'settings' => array(
          'fields' => array(),
          'match_operator' => 'CONTAINS',
          'path' => '',
          'size' => 60,
          'type_settings' => array(
            'allow_existing' => 1,
            'allow_new' => 0,
            'delete_references' => 0,
            'label_plural' => 'nodes',
            'label_singular' => 'node',
            'match_operator' => 'CONTAINS',
            'override_labels' => 0,
          ),
        ),
        'type' => 'entityreference_autocomplete',
        'weight' => 3,
      ),
    ),
  );

  // Exported field: 'node-sbp_landing_page-field_image'.
  $fields['node-sbp_landing_page-field_image'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 5,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_image',
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
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'sbp_landing_page',
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
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
            'quickedit' => array(
              'editor' => 'form',
            ),
          ),
          'type' => 'image',
          'weight' => 2,
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
      'field_name' => 'field_image',
      'label' => 'Banner Image(s)',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
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
            'document' => 0,
            'image' => 'image',
            'video' => 0,
          ),
          'browser_plugins' => array(
            'media_default--media_browser_1' => 0,
            'media_default--media_browser_my_files' => 0,
            'media_internet' => 0,
            'upload' => 0,
          ),
        ),
        'type' => 'media_generic',
        'weight' => 0,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner Image(s)');
  t('Body');
  t('Comment');
  t('Featured Content');

  return $fields;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function sbp_landing_page_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node sbp_landing_page defaults'.
  $permissions['administer panelizer node sbp_landing_page defaults'] = array(
    'name' => 'administer panelizer node sbp_landing_page defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create sbp_landing_page content'.
  $permissions['create sbp_landing_page content'] = array(
    'name' => 'create sbp_landing_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sbp_landing_page content'.
  $permissions['delete any sbp_landing_page content'] = array(
    'name' => 'delete any sbp_landing_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sbp_landing_page content'.
  $permissions['delete own sbp_landing_page content'] = array(
    'name' => 'delete own sbp_landing_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any sbp_landing_page content'.
  $permissions['edit any sbp_landing_page content'] = array(
    'name' => 'edit any sbp_landing_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sbp_landing_page content'.
  $permissions['edit own sbp_landing_page content'] = array(
    'name' => 'edit own sbp_landing_page content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
