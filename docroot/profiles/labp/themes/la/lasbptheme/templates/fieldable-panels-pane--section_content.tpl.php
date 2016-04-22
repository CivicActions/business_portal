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
$pane_body = $field_component_body[0]['value'];
$background_image = file_create_url($field_background_image[0]['uri']);

?>
  <div class="panel__intro style_variant_<?php print $pane_style; ?> <?php print $classes; ?>" <?php print $attributes; ?> >
    <?php if (!empty($background_image)): ?>
    <div class="panel__background_image">
      <img src="<?php print $background_image; ?>"/>
    </div>
    <?php endif; ?>
    <div class="panel__content_wrapper">
      <div class="panel__content_col_1">
        <h1 class="panel__intro_header"><?php print $pane_title; ?></h1>
        <hr class="panel__header-line"/>

        <div class="panel__intro_paragraph">
        <?php print $pane_body; ?>
        </div>
        <?php
        if (!empty($field_calls_to_action)):
        ?>
        <div class="panel__button_wrapper">
          <?php
          foreach ($field_calls_to_action as $key => $button) {
            ?>
            <div class="panel__button"><a href="<?php print $button['url']; ?>"><?php print $button['title']; ?></a>
            </div>
            <?php
          }
          ?>
        </div>
        <?php
        endif;
        ?>
      </div>
    </div>

  </div>
