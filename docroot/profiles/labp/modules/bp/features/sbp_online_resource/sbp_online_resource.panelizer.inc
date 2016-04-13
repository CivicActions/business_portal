<?php
/**
 * @file
 * sbp_online_resource.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function sbp_online_resource_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:online_resource:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'online_resource';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '89314a24-f9e5-471f-bd28-861bfa6b864f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4f22b627-c000-4415-8612-295926ebccdf';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = '4f22b627-c000-4415-8612-295926ebccdf';
    $display->content['new-4f22b627-c000-4415-8612-295926ebccdf'] = $pane;
    $display->panels['left'][0] = 'new-4f22b627-c000-4415-8612-295926ebccdf';
    $pane = new stdClass();
    $pane->pid = 'new-408a7c75-bb54-4e97-a262-2e9010d645a2';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'plain_text',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '408a7c75-bb54-4e97-a262-2e9010d645a2';
    $display->content['new-408a7c75-bb54-4e97-a262-2e9010d645a2'] = $pane;
    $display->panels['right'][0] = 'new-408a7c75-bb54-4e97-a262-2e9010d645a2';
    $pane = new stdClass();
    $pane->pid = 'new-714aca90-5e11-48d6-81b7-5371a8dbe05e';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_main_feature';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '714aca90-5e11-48d6-81b7-5371a8dbe05e';
    $display->content['new-714aca90-5e11-48d6-81b7-5371a8dbe05e'] = $pane;
    $display->panels['right'][1] = 'new-714aca90-5e11-48d6-81b7-5371a8dbe05e';
    $pane = new stdClass();
    $pane->pid = 'new-95b9eece-b32b-46c8-a694-dd6f7c8161de';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_secondary_feature';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '95b9eece-b32b-46c8-a694-dd6f7c8161de';
    $display->content['new-95b9eece-b32b-46c8-a694-dd6f7c8161de'] = $pane;
    $display->panels['right'][2] = 'new-95b9eece-b32b-46c8-a694-dd6f7c8161de';
    $pane = new stdClass();
    $pane->pid = 'new-2f5d6ec0-c803-4228-b63a-10998c5ab811';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_document';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2f5d6ec0-c803-4228-b63a-10998c5ab811';
    $display->content['new-2f5d6ec0-c803-4228-b63a-10998c5ab811'] = $pane;
    $display->panels['right'][3] = 'new-2f5d6ec0-c803-4228-b63a-10998c5ab811';
    $pane = new stdClass();
    $pane->pid = 'new-44e45d66-1c7e-45b8-af50-36d4341f165f';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_business_need';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '44e45d66-1c7e-45b8-af50-36d4341f165f';
    $display->content['new-44e45d66-1c7e-45b8-af50-36d4341f165f'] = $pane;
    $display->panels['right'][4] = 'new-44e45d66-1c7e-45b8-af50-36d4341f165f';
    $pane = new stdClass();
    $pane->pid = 'new-efb36a7f-0478-4cdd-90b6-841faf95a1fc';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_industry_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'efb36a7f-0478-4cdd-90b6-841faf95a1fc';
    $display->content['new-efb36a7f-0478-4cdd-90b6-841faf95a1fc'] = $pane;
    $display->panels['right'][5] = 'new-efb36a7f-0478-4cdd-90b6-841faf95a1fc';
    $pane = new stdClass();
    $pane->pid = 'new-a2679f7d-d7b8-4bcf-afd4-55ffbd76749a';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_business_ownership';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'a2679f7d-d7b8-4bcf-afd4-55ffbd76749a';
    $display->content['new-a2679f7d-d7b8-4bcf-afd4-55ffbd76749a'] = $pane;
    $display->panels['right'][6] = 'new-a2679f7d-d7b8-4bcf-afd4-55ffbd76749a';
    $pane = new stdClass();
    $pane->pid = 'new-4eb83bc3-c152-41cd-b8b2-791bb1ac7306';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_resource_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '4eb83bc3-c152-41cd-b8b2-791bb1ac7306';
    $display->content['new-4eb83bc3-c152-41cd-b8b2-791bb1ac7306'] = $pane;
    $display->panels['right'][7] = 'new-4eb83bc3-c152-41cd-b8b2-791bb1ac7306';
    $pane = new stdClass();
    $pane->pid = 'new-a88c2bc2-d706-4ba7-a80a-48fc2ce71534';
    $pane->panel = 'top';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a88c2bc2-d706-4ba7-a80a-48fc2ce71534';
    $display->content['new-a88c2bc2-d706-4ba7-a80a-48fc2ce71534'] = $pane;
    $display->panels['top'][0] = 'new-a88c2bc2-d706-4ba7-a80a-48fc2ce71534';
    $pane = new stdClass();
    $pane->pid = 'new-f659fc69-616a-44cb-998f-fca746460af5';
    $pane->panel = 'top';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'vid:12';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'fieldable_panels_pane' => (object) array(
        'bundle' => 'hero',
        'language' => 'und',
        'is_new' => TRUE,
        'title' => 'Hero',
        'link' => 0,
        'path' => '',
        'reusable' => 0,
        'admin_title' => '',
        'admin_description' => '',
        'category' => 'Reusable panes',
        'vid' => '12',
        'current_vid' => '',
        'revision' => 1,
        'fpid' => '10',
        'field_background' => array(
          'und' => array(
            0 => array(
              'value' => 0,
            ),
          ),
        ),
        'field_background_color' => array(
          'und' => array(
            0 => array(
              'value' => 'ffffff',
            ),
          ),
        ),
        'field_background_image' => array(
          'und' => array(),
        ),
        'field_calls_to_action' => array(
          'und' => array(),
        ),
        'field_icon' => array(
          'und' => array(),
        ),
        'field_line_and_subtitle_color' => array(
          'und' => array(
            0 => array(
              'value' => 'ffffff',
            ),
          ),
        ),
        'field_subtitle_1' => array(
          'und' => array(),
        ),
        'field_subtitle_2' => array(
          'und' => array(),
        ),
        'field_width' => array(
          'und' => array(),
        ),
        'log' => '',
        'created' => 1460515194,
        'timestamp' => 1460515194,
        'changed' => 1460515194,
        'uuid' => '',
        'uid' => '1',
        'vuuid' => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f659fc69-616a-44cb-998f-fca746460af5';
    $display->content['new-f659fc69-616a-44cb-998f-fca746460af5'] = $pane;
    $display->panels['top'][1] = 'new-f659fc69-616a-44cb-998f-fca746460af5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-408a7c75-bb54-4e97-a262-2e9010d645a2';
  $panelizer->display = $display;
  $export['node:online_resource:default'] = $panelizer;

  return $export;
}
