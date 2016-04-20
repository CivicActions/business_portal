<?php
/**
 * @file
 * Returns the HTML for a four_column_cta fieldable panels pane.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<?php

$pane_title = $content['title']['#value'];
$pane_style = $field_pane_style[0]['taxonomy_term'];
$pane_style = $pane_style->field_style_class[LANGUAGE_NONE][0]['value'];

?>
<div class="homepage_panel__icons style_variant_<?php print $pane_style; ?> <?php print $classes; ?>" <?php print $attributes; ?>>
  <div class="homepage_panel__content_wrapper">
    <h2 class="homepage_panel__header"><?php print $pane_title; ?></h2>
    <hr class="homepage_panel__header-line--white"/>
    <?php

    foreach ($field_calls_to_actions as $cta_key => $cta_value) {
      if (!empty($cta_value)) {
        $cta_id = $cta_value['value'];
        $cta_field_collection = entity_load('field_collection_item', array($cta_id));
        $cta_field_collection = $cta_field_collection[$cta_id];

        $cta_title = $cta_field_collection->field_title[LANGUAGE_NONE][0]['value'];
        $cta_description = $cta_field_collection->field_description[LANGUAGE_NONE][0]['value'];
        $cta_icon = file_create_url($cta_field_collection->field_icon[LANGUAGE_NONE][0]['uri']);
    ?>
        <div class="homepage_panel__section">
        <?php if (!empty($cta_icon)): ?>
          <div class="homepage_panel__icon"><img
              src="<?php print $cta_icon; ?>"/></div>
        <?php endif; ?>
          <h3 class="homepage_panel__icon_header"><?php if (!empty($cta_title)): print $cta_title; endif; ?></h3>
          <hr class="homepage_panel__header-line_thin">
          <p class="homepage_panel__paragraph">
            <?php
            if (!empty($cta_description)) {
              print $cta_description;
            }
            ?>
          </p>

        </div>
    <?php
      }
    }

    ?>

    </div>
</div>