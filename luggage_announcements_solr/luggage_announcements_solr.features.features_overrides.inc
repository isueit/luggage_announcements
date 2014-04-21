<?php
/**
 * @file
 * luggage_announcements_solr.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function luggage_announcements_solr_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-announcement-field_category.display|default|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-announcement-field_category.display|default|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-announcement-field_category.display|search_index|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-announcement-field_category.display|search_index|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-announcement-field_tags.display|default|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-announcement-field_tags.display|default|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-announcement-field_tags.display|search_index|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-announcement-field_tags.display|search_index|type"] = 'taxonomy_to_apachesolr_link';

 return $overrides;
}
