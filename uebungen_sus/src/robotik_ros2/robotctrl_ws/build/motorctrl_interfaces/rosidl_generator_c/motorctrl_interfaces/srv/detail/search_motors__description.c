// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from motorctrl_interfaces:srv/SearchMotors.idl
// generated code does not contain a copyright notice

#include "motorctrl_interfaces/srv/detail/search_motors__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_motorctrl_interfaces
const rosidl_type_hash_t *
motorctrl_interfaces__srv__SearchMotors__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbc, 0x67, 0x7e, 0x11, 0x20, 0xc3, 0xca, 0xa9,
      0xc6, 0x7f, 0xe6, 0x8e, 0x0d, 0x20, 0xb2, 0x65,
      0x0b, 0x1b, 0x29, 0x42, 0xbb, 0xe3, 0xc3, 0x65,
      0x5e, 0x20, 0x7a, 0xf3, 0xb8, 0x63, 0x9a, 0x49,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_motorctrl_interfaces
const rosidl_type_hash_t *
motorctrl_interfaces__srv__SearchMotors_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbd, 0x17, 0x94, 0xa9, 0xa6, 0xb5, 0xab, 0xd9,
      0x4a, 0xbb, 0xb3, 0xa6, 0xfa, 0x5b, 0x70, 0x3d,
      0x6c, 0x39, 0xa9, 0xbf, 0x5e, 0x11, 0xe5, 0xb0,
      0x43, 0x23, 0xce, 0xa1, 0x5f, 0x8d, 0xfd, 0xe6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_motorctrl_interfaces
const rosidl_type_hash_t *
motorctrl_interfaces__srv__SearchMotors_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf4, 0x1f, 0xc3, 0xa7, 0xca, 0x13, 0xa9, 0xc2,
      0x47, 0xa4, 0x28, 0xd6, 0x5f, 0xea, 0x58, 0x46,
      0xbe, 0xb8, 0xb9, 0x2c, 0xe3, 0x75, 0x92, 0xc6,
      0x72, 0xdb, 0xf9, 0x97, 0x70, 0xf6, 0x40, 0xf8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_motorctrl_interfaces
const rosidl_type_hash_t *
motorctrl_interfaces__srv__SearchMotors_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6a, 0xdb, 0xd3, 0xc0, 0x0b, 0x00, 0xff, 0x9a,
      0x8d, 0x04, 0x52, 0xce, 0x2b, 0xe7, 0x8b, 0xd2,
      0x97, 0xd9, 0x6a, 0x06, 0xcb, 0x23, 0x86, 0x63,
      0x20, 0x0c, 0xa7, 0x25, 0x5a, 0xc9, 0x2a, 0x5e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

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

static char motorctrl_interfaces__srv__SearchMotors__TYPE_NAME[] = "motorctrl_interfaces/srv/SearchMotors";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char motorctrl_interfaces__srv__SearchMotors_Event__TYPE_NAME[] = "motorctrl_interfaces/srv/SearchMotors_Event";
static char motorctrl_interfaces__srv__SearchMotors_Request__TYPE_NAME[] = "motorctrl_interfaces/srv/SearchMotors_Request";
static char motorctrl_interfaces__srv__SearchMotors_Response__TYPE_NAME[] = "motorctrl_interfaces/srv/SearchMotors_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char motorctrl_interfaces__srv__SearchMotors__FIELD_NAME__request_message[] = "request_message";
static char motorctrl_interfaces__srv__SearchMotors__FIELD_NAME__response_message[] = "response_message";
static char motorctrl_interfaces__srv__SearchMotors__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field motorctrl_interfaces__srv__SearchMotors__FIELDS[] = {
  {
    {motorctrl_interfaces__srv__SearchMotors__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {motorctrl_interfaces__srv__SearchMotors_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SearchMotors__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {motorctrl_interfaces__srv__SearchMotors_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SearchMotors__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {motorctrl_interfaces__srv__SearchMotors_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription motorctrl_interfaces__srv__SearchMotors__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SearchMotors_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SearchMotors_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SearchMotors_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motorctrl_interfaces__srv__SearchMotors__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motorctrl_interfaces__srv__SearchMotors__TYPE_NAME, 37, 37},
      {motorctrl_interfaces__srv__SearchMotors__FIELDS, 3, 3},
    },
    {motorctrl_interfaces__srv__SearchMotors__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = motorctrl_interfaces__srv__SearchMotors_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = motorctrl_interfaces__srv__SearchMotors_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = motorctrl_interfaces__srv__SearchMotors_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char motorctrl_interfaces__srv__SearchMotors_Request__FIELD_NAME__uart_port[] = "uart_port";
static char motorctrl_interfaces__srv__SearchMotors_Request__FIELD_NAME__baudrate[] = "baudrate";

static rosidl_runtime_c__type_description__Field motorctrl_interfaces__srv__SearchMotors_Request__FIELDS[] = {
  {
    {motorctrl_interfaces__srv__SearchMotors_Request__FIELD_NAME__uart_port, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SearchMotors_Request__FIELD_NAME__baudrate, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motorctrl_interfaces__srv__SearchMotors_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motorctrl_interfaces__srv__SearchMotors_Request__TYPE_NAME, 45, 45},
      {motorctrl_interfaces__srv__SearchMotors_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char motorctrl_interfaces__srv__SearchMotors_Response__FIELD_NAME__motor_ids[] = "motor_ids";
static char motorctrl_interfaces__srv__SearchMotors_Response__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field motorctrl_interfaces__srv__SearchMotors_Response__FIELDS[] = {
  {
    {motorctrl_interfaces__srv__SearchMotors_Response__FIELD_NAME__motor_ids, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SearchMotors_Response__FIELD_NAME__status, 6, 6},
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
motorctrl_interfaces__srv__SearchMotors_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motorctrl_interfaces__srv__SearchMotors_Response__TYPE_NAME, 46, 46},
      {motorctrl_interfaces__srv__SearchMotors_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char motorctrl_interfaces__srv__SearchMotors_Event__FIELD_NAME__info[] = "info";
static char motorctrl_interfaces__srv__SearchMotors_Event__FIELD_NAME__request[] = "request";
static char motorctrl_interfaces__srv__SearchMotors_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field motorctrl_interfaces__srv__SearchMotors_Event__FIELDS[] = {
  {
    {motorctrl_interfaces__srv__SearchMotors_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SearchMotors_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {motorctrl_interfaces__srv__SearchMotors_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SearchMotors_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {motorctrl_interfaces__srv__SearchMotors_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription motorctrl_interfaces__srv__SearchMotors_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SearchMotors_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__SearchMotors_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motorctrl_interfaces__srv__SearchMotors_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motorctrl_interfaces__srv__SearchMotors_Event__TYPE_NAME, 43, 43},
      {motorctrl_interfaces__srv__SearchMotors_Event__FIELDS, 3, 3},
    },
    {motorctrl_interfaces__srv__SearchMotors_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = motorctrl_interfaces__srv__SearchMotors_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = motorctrl_interfaces__srv__SearchMotors_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "char[] uart_port    # UART port for motor communication\n"
  "uint32 baudrate     # baudrate for motor communication\n"
  "---\n"
  "uint8[] motor_ids   # found motor IDs\n"
  "bool status                 ";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
motorctrl_interfaces__srv__SearchMotors__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motorctrl_interfaces__srv__SearchMotors__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 181, 181},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
motorctrl_interfaces__srv__SearchMotors_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motorctrl_interfaces__srv__SearchMotors_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
motorctrl_interfaces__srv__SearchMotors_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motorctrl_interfaces__srv__SearchMotors_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
motorctrl_interfaces__srv__SearchMotors_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motorctrl_interfaces__srv__SearchMotors_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motorctrl_interfaces__srv__SearchMotors__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motorctrl_interfaces__srv__SearchMotors__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *motorctrl_interfaces__srv__SearchMotors_Event__get_individual_type_description_source(NULL);
    sources[3] = *motorctrl_interfaces__srv__SearchMotors_Request__get_individual_type_description_source(NULL);
    sources[4] = *motorctrl_interfaces__srv__SearchMotors_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motorctrl_interfaces__srv__SearchMotors_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motorctrl_interfaces__srv__SearchMotors_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motorctrl_interfaces__srv__SearchMotors_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motorctrl_interfaces__srv__SearchMotors_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motorctrl_interfaces__srv__SearchMotors_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motorctrl_interfaces__srv__SearchMotors_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *motorctrl_interfaces__srv__SearchMotors_Request__get_individual_type_description_source(NULL);
    sources[3] = *motorctrl_interfaces__srv__SearchMotors_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
