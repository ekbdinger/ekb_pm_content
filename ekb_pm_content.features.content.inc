<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ekb_pm_content_content_default_fields() {
  $fields = array();

  // Exported field: field_pm_file
  $fields['pm_doc-field_pm_file'] = array(
    'field_name' => 'field_pm_file',
    'type_name' => 'pm_doc',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'txt doc pdf xls zip rar',
      'file_path' => 'departments/pm/files',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '20M',
      'max_filesize_per_node' => '20M',
      'label' => 'File',
      'weight' => '-4',
      'description' => 'Upload your file here',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('File');

  return $fields;
}
