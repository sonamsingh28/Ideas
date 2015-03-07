<?php
/**
* Implementation of hook_rules_event_info().
*/
function custom_rules_rules_event_info() {
  return array(
    'author_in_top_five' => array(
      'label' => t('Author is in top five.'),
      'module' => 'custom_rules',
      'arguments' => array(
        'acting_user' => array('type' => 'user', 'label' => t('The author who entered top five.')),
        //'package' => array('type' => 'package', 'label' => t('The purchased package.')),
      ),
    ),
  );
}