<?php
/**
 * @file
 * luggage_announcements_solr.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function luggage_announcements_solr_field_default_field_instances_alter(&$data) {
  if (isset($data['node-announcement-field_category'])) {
    $data['node-announcement-field_category']['display']['default']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-announcement-field_category']['display']['default']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-announcement-field_category']['display']['search_index']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-announcement-field_category']['display']['search_index']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-announcement-field_category']['display']['search_result']['weight'] = 14; /* WAS: 5 */
    $data['node-announcement-field_category']['display']['teaser']['weight'] = 8; /* WAS: 0 */
  }
  if (isset($data['node-announcement-field_tags'])) {
    $data['node-announcement-field_tags']['display']['default']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-announcement-field_tags']['display']['default']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-announcement-field_tags']['display']['search_index']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-announcement-field_tags']['display']['search_index']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-announcement-field_tags']['display']['search_result'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 13,
    ); /* WAS: '' */
    $data['node-announcement-field_tags']['display']['teaser'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 9,
    ); /* WAS: '' */
  }
}
