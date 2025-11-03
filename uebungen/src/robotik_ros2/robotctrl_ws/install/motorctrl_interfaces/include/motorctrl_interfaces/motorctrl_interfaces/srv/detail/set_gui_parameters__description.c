// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from motorctrl_interfaces:srv/SetGUIParameters.idl
// generated code does not contain a copyright notice

#include "motorctrl_interfaces/srv/detail/set_gui_parameters__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_motorctrl_interfaces
const rosidl_type_hash_t *
motorctrl_interfaces__srv__SetGUIParameters__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd7, 0xf4, 0xa6, 0xe0, 0x42, 0xe7, 0x41, 0x22,
      0xcd, 0x2f, 0xc8, 0x27, 0x99, 0x6c, 0xe3, 0x31,
      0x49, 0x8e, 0x1d, 0x50, 0xf4, 0xdb, 0x4c, 0xb0,
      0xa7, 0x25, 0x22, 0x8a, 0x42, 0x37, 0x79, 0x04,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_motorctrl_interfaces
const rosidl_type_hash_t *
motorctrl_interfaces__srv__SetGUIParameters_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcf, 0xce, 0x0f, 0x97, 0xea, 0x67, 0x03, 0xbb,
      0x2b, 0x8b, 0xd0, 0xb6, 0x93, 0x1a, 0xee, 0xcd,
      0x57, 0x99, 0xbd, 0x95, 0x10, 0xee, 0xf2, 0x04,
      0xd3, 0xb5, 0x4d, 0x37, 0xdc, 0x4a, 0xe1, 0xbf,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_motorctrl_interfaces
const rosidl_type_hash_t *
motorctrl_interfaces__srv__SetGUIParameters_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb4, 0xdd, 0xe7, 0x04, 0x15, 0x9b, 0x79, 0x68,
      0x93, 0x83, 0x01, 0x88, 0x07, 0x15, 0xaf, 0xe2,
      0xb6, 0x16, 0x31, 0xc3, 0xa5, 0x4e, 0x9f, 0x48,
      0x6a, 0xcd, 0x16, 0x6b, 0xd1, 0x32, 0xa5, 0xd8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_motorctrl_interfaces
const rosidl_type_hash_t *
motorctrl_interfaces__srv__SetGUIParameters_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe2, 0xab, 0x84, 0x26, 0x53, 0xed, 0x3f, 0x3c,
      0xe0, 0x5f, 0x44, 0xaf, 0x69, 0x05, 0x1e, 0xf3,
      0x1f, 0x2b, 0xb9, 0xd4, 0x4b, 0x66, 0x05, 0xd3,
      0x81, 0xdb, 0xc3, 0x16, 0xa8, 0x4e, 0x22, 0xee,
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

static char motorctrl_interfaces__srv__SetGUIParameters__TYPE_NAME[] = "motorctrl_interfaces/srv/SetGUIParameters";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char motorctrl_interfaces__srv__SetGUIParameters_Event__TYPE_NAME[] = "motorctrl_interfaces/srv/SetGUIParameters_Event";
static char motorctrl_interfaces__srv__SetGUIParameters_Request__TYPE_NAME[] = "motorctrl_interfaces/srv/SetGUIParameters_Request";
static char motorctrl_interfaces__srv__SetGUIParameters_Response__TYPE_NAME[] = "motorctrl_interfaces/srv/SetGUIParameters_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char motorctrl_interfaces__srv__SetGUIParameters__FIELD_NAME__request_message[] = "request_message";
static char motorctrl_interfaces__srv__SetGUIParameters__FIELD_NAME__response_message[] = "response_message";
static char motorctrl_interfaces__srv__SetGUIParameters__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field motorctrl_interfaces__srv__SetGUIParameters__FIELDS[] = {
  {
    {motorctrl_interfaces__srv__SetGUIParameters__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {motorctrl_interfaces__srv__SetGUIParameters_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SetGUIParameters__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {motorctrl_interfaces__srv__SetGUIParameters_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SetGUIParameters__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {motorctrl_interfaces__srv__SetGUIParameters_Event__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription motorctrl_interfaces__srv__SetGUIParameters__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SetGUIParameters_Event__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SetGUIParameters_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SetGUIParameters_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motorctrl_interfaces__srv__SetGUIParameters__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motorctrl_interfaces__srv__SetGUIParameters__TYPE_NAME, 41, 41},
      {motorctrl_interfaces__srv__SetGUIParameters__FIELDS, 3, 3},
    },
    {motorctrl_interfaces__srv__SetGUIParameters__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = motorctrl_interfaces__srv__SetGUIParameters_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = motorctrl_interfaces__srv__SetGUIParameters_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = motorctrl_interfaces__srv__SetGUIParameters_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char motorctrl_interfaces__srv__SetGUIParameters_Request__FIELD_NAME__uart_name[] = "uart_name";
static char motorctrl_interfaces__srv__SetGUIParameters_Request__FIELD_NAME__uart_baudrate[] = "uart_baudrate";
static char motorctrl_interfaces__srv__SetGUIParameters_Request__FIELD_NAME__motor_ids[] = "motor_ids";
static char motorctrl_interfaces__srv__SetGUIParameters_Request__FIELD_NAME__wheel_radius[] = "wheel_radius";
static char motorctrl_interfaces__srv__SetGUIParameters_Request__FIELD_NAME__wheel_separation[] = "wheel_separation";

static rosidl_runtime_c__type_description__Field motorctrl_interfaces__srv__SetGUIParameters_Request__FIELDS[] = {
  {
    {motorctrl_interfaces__srv__SetGUIParameters_Request__FIELD_NAME__uart_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SetGUIParameters_Request__FIELD_NAME__uart_baudrate, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SetGUIParameters_Request__FIELD_NAME__motor_ids, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SetGUIParameters_Request__FIELD_NAME__wheel_radius, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SetGUIParameters_Request__FIELD_NAME__wheel_separation, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motorctrl_interfaces__srv__SetGUIParameters_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motorctrl_interfaces__srv__SetGUIParameters_Request__TYPE_NAME, 49, 49},
      {motorctrl_interfaces__srv__SetGUIParameters_Request__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char motorctrl_interfaces__srv__SetGUIParameters_Response__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field motorctrl_interfaces__srv__SetGUIParameters_Response__FIELDS[] = {
  {
    {motorctrl_interfaces__srv__SetGUIParameters_Response__FIELD_NAME__status, 6, 6},
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
motorctrl_interfaces__srv__SetGUIParameters_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motorctrl_interfaces__srv__SetGUIParameters_Response__TYPE_NAME, 50, 50},
      {motorctrl_interfaces__srv__SetGUIParameters_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char motorctrl_interfaces__srv__SetGUIParameters_Event__FIELD_NAME__info[] = "info";
static char motorctrl_interfaces__srv__SetGUIParameters_Event__FIELD_NAME__request[] = "request";
static char motorctrl_interfaces__srv__SetGUIParameters_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field motorctrl_interfaces__srv__SetGUIParameters_Event__FIELDS[] = {
  {
    {motorctrl_interfaces__srv__SetGUIParameters_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SetGUIParameters_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {motorctrl_interfaces__srv__SetGUIParameters_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SetGUIParameters_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {motorctrl_interfaces__srv__SetGUIParameters_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription motorctrl_interfaces__srv__SetGUIParameters_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SetGUIParameters_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SetGUIParameters_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motorctrl_interfaces__srv__SetGUIParameters_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motorctrl_interfaces__srv__SetGUIParameters_Event__TYPE_NAME, 47, 47},
      {motorctrl_interfaces__srv__SetGUIParameters_Event__FIELDS, 3, 3},
    },
    {motorctrl_interfaces__srv__SetGUIParameters_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = motorctrl_interfaces__srv__SetGUIParameters_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = motorctrl_interfaces__srv__SetGUIParameters_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string uart_name\n"
  "uint32 uart_baudrate\n"
  "uint8[]  motor_ids\n"
  "float32 wheel_radius\n"
  "float32 wheel_separation\n"
  "---\n"
  "bool status";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
motorctrl_interfaces__srv__SetGUIParameters__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motorctrl_interfaces__srv__SetGUIParameters__TYPE_NAME, 41, 41},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 118, 118},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
motorctrl_interfaces__srv__SetGUIParameters_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motorctrl_interfaces__srv__SetGUIParameters_Request__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
motorctrl_interfaces__srv__SetGUIParameters_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motorctrl_interfaces__srv__SetGUIParameters_Response__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
motorctrl_interfaces__srv__SetGUIParameters_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motorctrl_interfaces__srv__SetGUIParameters_Event__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motorctrl_interfaces__srv__SetGUIParameters__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motorctrl_interfaces__srv__SetGUIParameters__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *motorctrl_interfaces__srv__SetGUIParameters_Event__get_individual_type_description_source(NULL);
    sources[3] = *motorctrl_interfaces__srv__SetGUIParameters_Request__get_individual_type_description_source(NULL);
    sources[4] = *motorctrl_interfaces__srv__SetGUIParameters_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motorctrl_interfaces__srv__SetGUIParameters_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motorctrl_interfaces__srv__SetGUIParameters_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motorctrl_interfaces__srv__SetGUIParameters_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motorctrl_interfaces__srv__SetGUIParameters_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motorctrl_interfaces__srv__SetGUIParameters_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motorctrl_interfaces__srv__SetGUIParameters_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *motorctrl_interfaces__srv__SetGUIParameters_Request__get_individual_type_description_source(NULL);
    sources[3] = *motorctrl_interfaces__srv__SetGUIParameters_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
