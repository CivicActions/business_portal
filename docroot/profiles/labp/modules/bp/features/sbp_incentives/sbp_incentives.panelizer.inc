<?php
/**
 * @file
 * sbp_incentives.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function sbp_incentives_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:incentives:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'incentives';
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
  $display->uuid = 'dcfb36cf-e8e0-41fa-b35e-f7f0a35ac6b4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-eada519e-a60c-40ef-a221-86afac4d6c07';
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
    $pane->uuid = 'eada519e-a60c-40ef-a221-86afac4d6c07';
    $display->content['new-eada519e-a60c-40ef-a221-86afac4d6c07'] = $pane;
    $display->panels['left'][0] = 'new-eada519e-a60c-40ef-a221-86afac4d6c07';
    $pane = new stdClass();
    $pane->pid = 'new-765338f4-3eaa-4cda-aa08-da7891fc464c';
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
    $pane->uuid = '765338f4-3eaa-4cda-aa08-da7891fc464c';
    $display->content['new-765338f4-3eaa-4cda-aa08-da7891fc464c'] = $pane;
    $display->panels['right'][0] = 'new-765338f4-3eaa-4cda-aa08-da7891fc464c';
    $pane = new stdClass();
    $pane->pid = 'new-e7e6637f-a3f8-4f74-9d9b-0ae21058b4ec';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_incentive_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
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
    $pane->uuid = 'e7e6637f-a3f8-4f74-9d9b-0ae21058b4ec';
    $display->content['new-e7e6637f-a3f8-4f74-9d9b-0ae21058b4ec'] = $pane;
    $display->panels['right'][1] = 'new-e7e6637f-a3f8-4f74-9d9b-0ae21058b4ec';
    $pane = new stdClass();
    $pane->pid = 'new-a2efa7c7-4ea5-40d7-820b-fd37a7660952';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a2efa7c7-4ea5-40d7-820b-fd37a7660952';
    $display->content['new-a2efa7c7-4ea5-40d7-820b-fd37a7660952'] = $pane;
    $display->panels['right'][2] = 'new-a2efa7c7-4ea5-40d7-820b-fd37a7660952';
    $pane = new stdClass();
    $pane->pid = 'new-af0ded14-095b-470b-8f9e-eb76c8f345af';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'af0ded14-095b-470b-8f9e-eb76c8f345af';
    $display->content['new-af0ded14-095b-470b-8f9e-eb76c8f345af'] = $pane;
    $display->panels['right'][3] = 'new-af0ded14-095b-470b-8f9e-eb76c8f345af';
    $pane = new stdClass();
    $pane->pid = 'new-d9bfdf47-1e34-41e3-ad39-246f2549fbda';
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
    $pane->uuid = 'd9bfdf47-1e34-41e3-ad39-246f2549fbda';
    $display->content['new-d9bfdf47-1e34-41e3-ad39-246f2549fbda'] = $pane;
    $display->panels['right'][4] = 'new-d9bfdf47-1e34-41e3-ad39-246f2549fbda';
    $pane = new stdClass();
    $pane->pid = 'new-76cfe699-419a-4e99-8f81-2d246a9228c8';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '76cfe699-419a-4e99-8f81-2d246a9228c8';
    $display->content['new-76cfe699-419a-4e99-8f81-2d246a9228c8'] = $pane;
    $display->panels['right'][5] = 'new-76cfe699-419a-4e99-8f81-2d246a9228c8';
    $pane = new stdClass();
    $pane->pid = 'new-4b2805dc-ea75-44bd-9777-99ac4b4a94af';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '4b2805dc-ea75-44bd-9777-99ac4b4a94af';
    $display->content['new-4b2805dc-ea75-44bd-9777-99ac4b4a94af'] = $pane;
    $display->panels['right'][6] = 'new-4b2805dc-ea75-44bd-9777-99ac4b4a94af';
    $pane = new stdClass();
    $pane->pid = 'new-20f9960d-46de-460f-a42f-40deb87a9b34';
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
    $pane->uuid = '20f9960d-46de-460f-a42f-40deb87a9b34';
    $display->content['new-20f9960d-46de-460f-a42f-40deb87a9b34'] = $pane;
    $display->panels['top'][0] = 'new-20f9960d-46de-460f-a42f-40deb87a9b34';
    $pane = new stdClass();
    $pane->pid = 'new-12603df7-2b39-4f13-98b8-dc0bab0a6517';
    $pane->panel = 'top';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'vid:11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'fieldable_panels_pane' => (object) array(
        'bundle' => 'hero',
        'language' => '',
        'is_new' => TRUE,
        'title' => 'Hero',
        'link' => 0,
        'path' => '',
        'reusable' => 0,
        'admin_title' => '',
        'admin_description' => '',
        'category' => 'Reusable panes',
        'vid' => '11',
        'current_vid' => '',
        'revision' => 1,
        'fpid' => '9',
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
        'created' => 1460514283,
        'timestamp' => 1460514283,
        'changed' => 1460514283,
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
    $pane->uuid = '12603df7-2b39-4f13-98b8-dc0bab0a6517';
    $display->content['new-12603df7-2b39-4f13-98b8-dc0bab0a6517'] = $pane;
    $display->panels['top'][1] = 'new-12603df7-2b39-4f13-98b8-dc0bab0a6517';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-765338f4-3eaa-4cda-aa08-da7891fc464c';
  $panelizer->display = $display;
  $export['node:incentives:default'] = $panelizer;

  return $export;
}
