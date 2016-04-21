<?php

/**
 * @file field.tpl.php
 * Default template implementation to display the value of a field.
 *
 * This file is not used and is here as a starting point for customization only.
 * @see theme_field()
 *
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - field: The current template type, i.e., "theming hook".
 *   - field-name-[field_name]: The current field name. For example, if the
 *     field name is "field_description" it would result in
 *     "field-name-field-description".
 *   - field-type-[field_type]: The current field type. For example, if the
 *     field type is "text" it would result in "field-type-text".
 *   - field-label-[label_display]: The current label position. For example, if
 *     the label position is "above" it would result in "field-label-above".
 *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 *
 * @ingroup themeable
 */
$heros = $items[0]['entity']['field_collection_item'];
foreach($heros as $hero){
  $width = strtolower($hero['field_width'][0]['#markup']);
  $background_image = $hero['field_background_image']['#items']['0']['uri'];
  $pane_style = strtolower($hero['field_pane_style'][0]['#title']);
  $hero_title = $hero['field_hero_title'][0]['#markup'];
  $icon = $hero['field_icon']['#items']['0']['uri'];
  $hero_subtitle = $hero['field_subtitle_long']['#items'][0]['value'];
  $hero_subtitle_long = $hero['field_subtitle_2']['#items'][0]['value'];
}
?>
<!-- hero start -->
<div class="pane__hero_<?php print $width; ?> style_variant_<?php print $pane_style; ?> <?php print $classes; ?>">
  <?php if($background_image):?>
    <div class="hero__overlay_<?php print $width; ?>_photo">
      <img src="<?php print file_create_url($background_image); ?>" />
    </div>
  <?php endif; ?>
  <div class="hero__overlay_<?php print $width; ?>">
    <div class="hero__icon_bottom_alignment">
      <?php if($icon):?>
        <div class="hero__icon"><img src="<?php print file_create_url($icon); ?>" /></div>
      <?php endif; ?>
      <div class="hero__headline"><?php print $hero_title; ?></div>
    </div>
  </div>
  <?php if($hero_subtitle || $hero_subtitle_long): ?>
    <div class="hero__content_wrapper">
      <div class="hero__copy--col_1">
        <div class="hero__bottom_align--bn">
          <?php if($hero_subtitle): ?>
            <h5 class="hero__business__name"><?php print $hero_subtitle; ?></h5>
          <?php endif; ?>
          <?php if($hero_subtitle_long): ?>
            <p class="hero__business__description">
              <?php print $hero_subtitle_long; ?>
            </p>
            <?php endif; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>
</div>
