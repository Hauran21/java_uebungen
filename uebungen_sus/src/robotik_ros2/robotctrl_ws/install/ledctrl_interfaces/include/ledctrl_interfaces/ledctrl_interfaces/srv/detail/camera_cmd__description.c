// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ledctrl_interfaces:srv/CameraCmd.idl
// generated code does not contain a copyright notice

#include "ledctrl_interfaces/srv/detail/camera_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_type_hash_t *
ledctrl_interfaces__srv__CameraCmd__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0xc8, 0x88, 0x3a, 0x90, 0x93, 0xe1, 0x9a,
      0xec, 0x0b, 0x0e, 0x55, 0xfe, 0x5a, 0x32, 0x44,
      0xa2, 0xc7, 0x67, 0xff, 0x95, 0xdb, 0x92, 0x38,
      0x91, 0x5c, 0xb2, 0xa4, 0xf7, 0x12, 0xdb, 0xa1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_type_hash_t *
ledctrl_interfaces__srv__CameraCmd_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc5, 0x35, 0x2d, 0x2e, 0x61, 0xcd, 0xae, 0x2f,
      0x7e, 0x0e, 0xd5, 0xfe, 0x73, 0x9e, 0xcf, 0x1f,
      0x4a, 0xb0, 0x43, 0x8a, 0xba, 0x6d, 0xc7, 0x9f,
      0xcc, 0x61, 0xd2, 0xc3, 0x25, 0xcb, 0xc7, 0x8c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_type_hash_t *
ledctrl_interfaces__srv__CameraCmd_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0x23, 0x82, 0xbe, 0x5c, 0x8a, 0x24, 0x98,
      0x7b, 0x4a, 0x3e, 0x9f, 0xa0, 0xd0, 0x6b, 0xb6,
      0x8e, 0xeb, 0x7b, 0x56, 0xdd, 0xe2, 0x95, 0xab,
      0xbd, 0xa6, 0x34, 0xb6, 0x5f, 0xd1, 0xcd, 0xb8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ledctrl_interfaces
const rosidl_type_hash_t *
ledctrl_interfaces__srv__CameraCmd_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0xc6, 0x2e, 0xb7, 0x43, 0x89, 0xb7, 0x4e,
      0xbe, 0x38, 0x6f, 0xf2, 0xfa, 0x6c, 0x6b, 0x8b,
      0x57, 0x63, 0xa6, 0xb9, 0xef, 0x26, 0x97, 0xff,
      0xdf, 0xd0, 0x25, 0x26, 0xf3, 0xce, 0x63, 0x0e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char ledctrl_interfaces__srv__CameraCmd__TYPE_NAME[] = "ledctrl_interfaces/srv/CameraCmd";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char ledctrl_interfaces__srv__CameraCmd_Event__TYPE_NAME[] = "ledctrl_interfaces/srv/CameraCmd_Event";
static char ledctrl_interfaces__srv__CameraCmd_Request__TYPE_NAME[] = "ledctrl_interfaces/srv/CameraCmd_Request";
static char ledctrl_interfaces__srv__CameraCmd_Response__TYPE_NAME[] = "ledctrl_interfaces/srv/CameraCmd_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char ledctrl_interfaces__srv__CameraCmd__FIELD_NAME__request_message[] = "request_message";
static char ledctrl_interfaces__srv__CameraCmd__FIELD_NAME__response_message[] = "response_message";
static char ledctrl_interfaces__srv__CameraCmd__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ledctrl_interfaces__srv__CameraCmd__FIELDS[] = {
  {
    {ledctrl_interfaces__srv__CameraCmd__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ledctrl_interfaces__srv__CameraCmd_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {ledctrl_interfaces__srv__CameraCmd__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ledctrl_interfaces__srv__CameraCmd_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {ledctrl_interfaces__srv__CameraCmd__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ledctrl_interfaces__srv__CameraCmd_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ledctrl_interfaces__srv__CameraCmd__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ledctrl_interfaces__srv__CameraCmd_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {ledctrl_interfaces__srv__CameraCmd_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {ledctrl_interfaces__srv__CameraCmd_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ledctrl_interfaces__srv__CameraCmd__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ledctrl_interfaces__srv__CameraCmd__TYPE_NAME, 32, 32},
      {ledctrl_interfaces__srv__CameraCmd__FIELDS, 3, 3},
    },
    {ledctrl_interfaces__srv__CameraCmd__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ledctrl_interfaces__srv__CameraCmd_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ledctrl_interfaces__srv__CameraCmd_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ledctrl_interfaces__srv__CameraCmd_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ledctrl_interfaces__srv__CameraCmd_Request__FIELD_NAME__cmd[] = "cmd";
static char ledctrl_interfaces__srv__CameraCmd_Request__FIELD_NAME__side[] = "side";
static char ledctrl_interfaces__srv__CameraCmd_Request__FIELD_NAME__color_on[] = "color_on";
static char ledctrl_interfaces__srv__CameraCmd_Request__FIELD_NAME__color_off[] = "color_off";
static char ledctrl_interfaces__srv__CameraCmd_Request__FIELD_NAME__duration_on[] = "duration_on";
static char ledctrl_interfaces__srv__CameraCmd_Request__FIELD_NAME__duration_off[] = "duration_off";
static char ledctrl_interfaces__srv__CameraCmd_Request__FIELD_NAME__repetitions[] = "repetitions";

static rosidl_runtime_c__type_description__Field ledctrl_interfaces__srv__CameraCmd_Request__FIELDS[] = {
  {
    {ledctrl_interfaces__srv__CameraCmd_Request__FIELD_NAME__cmd, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ledctrl_interfaces__srv__CameraCmd_Request__FIELD_NAME__side, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ledctrl_interfaces__srv__CameraCmd_Request__FIELD_NAME__color_on, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ledctrl_interfaces__srv__CameraCmd_Request__FIELD_NAME__color_off, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ledctrl_interfaces__srv__CameraCmd_Request__FIELD_NAME__duration_on, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ledctrl_interfaces__srv__CameraCmd_Request__FIELD_NAME__duration_off, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ledctrl_interfaces__srv__CameraCmd_Request__FIELD_NAME__repetitions, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ledctrl_interfaces__srv__CameraCmd_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ledctrl_interfaces__srv__CameraCmd_Request__TYPE_NAME, 40, 40},
      {ledctrl_interfaces__srv__CameraCmd_Request__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ledctrl_interfaces__srv__CameraCmd_Response__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field ledctrl_interfaces__srv__CameraCmd_Response__FIELDS[] = {
  {
    {ledctrl_interfaces__srv__CameraCmd_Response__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ledctrl_interfaces__srv__CameraCmd_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ledctrl_interfaces__srv__CameraCmd_Response__TYPE_NAME, 41, 41},
      {ledctrl_interfaces__srv__CameraCmd_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ledctrl_interfaces__srv__CameraCmd_Event__FIELD_NAME__info[] = "info";
static char ledctrl_interfaces__srv__CameraCmd_Event__FIELD_NAME__request[] = "request";
static char ledctrl_interfaces__srv__CameraCmd_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ledctrl_interfaces__srv__CameraCmd_Event__FIELDS[] = {
  {
    {ledctrl_interfaces__srv__CameraCmd_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ledctrl_interfaces__srv__CameraCmd_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ledctrl_interfaces__srv__CameraCmd_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {ledctrl_interfaces__srv__CameraCmd_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ledctrl_interfaces__srv__CameraCmd_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ledctrl_interfaces__srv__CameraCmd_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ledctrl_interfaces__srv__CameraCmd_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {ledctrl_interfaces__srv__CameraCmd_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ledctrl_interfaces__srv__CameraCmd_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ledctrl_interfaces__srv__CameraCmd_Event__TYPE_NAME, 38, 38},
      {ledctrl_interfaces__srv__CameraCmd_Event__FIELDS, 3, 3},
    },
    {ledctrl_interfaces__srv__CameraCmd_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ledctrl_interfaces__srv__CameraCmd_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ledctrl_interfaces__srv__CameraCmd_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string cmd          #turn signal, detection  indication, warn-signal, \n"
  "int8 side           #left, right, both\n"
  "uint8[] color_on    # RGBW values\n"
  "uint8[] color_off   # RGBW values\n"
  "float32 duration_on  # duration in seconds\n"
  "float32 duration_off # duration in seconds\n"
  "int8 repetitions\n"
  "---\n"
  "bool status                 ";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ledctrl_interfaces__srv__CameraCmd__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ledctrl_interfaces__srv__CameraCmd__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 313, 313},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ledctrl_interfaces__srv__CameraCmd_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ledctrl_interfaces__srv__CameraCmd_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ledctrl_interfaces__srv__CameraCmd_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ledctrl_interfaces__srv__CameraCmd_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ledctrl_interfaces__srv__CameraCmd_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ledctrl_interfaces__srv__CameraCmd_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ledctrl_interfaces__srv__CameraCmd__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ledctrl_interfaces__srv__CameraCmd__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ledctrl_interfaces__srv__CameraCmd_Event__get_individual_type_description_source(NULL);
    sources[3] = *ledctrl_interfaces__srv__CameraCmd_Request__get_individual_type_description_source(NULL);
    sources[4] = *ledctrl_interfaces__srv__CameraCmd_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ledctrl_interfaces__srv__CameraCmd_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ledctrl_interfaces__srv__CameraCmd_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ledctrl_interfaces__srv__CameraCmd_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ledctrl_interfaces__srv__CameraCmd_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ledctrl_interfaces__srv__CameraCmd_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ledctrl_interfaces__srv__CameraCmd_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ledctrl_interfaces__srv__CameraCmd_Request__get_individual_type_description_source(NULL);
    sources[3] = *ledctrl_interfaces__srv__CameraCmd_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
