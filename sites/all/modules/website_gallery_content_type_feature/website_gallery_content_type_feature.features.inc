<?php
/**
 * @file
 * website_gallery_content_type_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function website_gallery_content_type_feature_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
