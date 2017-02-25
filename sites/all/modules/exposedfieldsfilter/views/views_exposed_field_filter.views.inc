<?php
/**
 * @file
 * Definition of custom views api.
 */

/**
 * Implements hook_views_data().
 */
function views_exposed_field_filter_views_data() {
  $data['views']['views_exposed_field_filter'] = array(
    'title' => t('Exposed fields filter'),
    'help' => t('Exposed Fields to visitor.'),
    'filter' => array(
      'handler' => 'views_handler_filter_views_exposed_field_filter',
    ),
  );
  return $data;
}
