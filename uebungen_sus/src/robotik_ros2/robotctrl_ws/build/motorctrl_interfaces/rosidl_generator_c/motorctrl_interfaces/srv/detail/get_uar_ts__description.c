// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from motorctrl_interfaces:srv/GetUARTs.idl
// generated code does not contain a copyright notice

#include "motorctrl_interfaces/srv/detail/get_uar_ts__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_motorctrl_interfaces
const rosidl_type_hash_t *
motorctrl_interfaces__srv__GetUARTs__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0x70, 0xf2, 0xd8, 0x44, 0x1e, 0x12, 0xe8,
      0x72, 0xf1, 0x69, 0x15, 0xb7, 0x96, 0x3b, 0xc4,
      0x2b, 0x5f, 0x6e, 0xe7, 0xfa, 0xc1, 0x43, 0xb0,
      0xb4, 0xe6, 0xe7, 0x6d, 0xf2, 0x5a, 0xa8, 0x75,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_motorctrl_interfaces
const rosidl_type_hash_t *
motorctrl_interfaces__srv__GetUARTs_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0e, 0x3f, 0xaa, 0x75, 0x11, 0xbd, 0x4e, 0x20,
      0x14, 0x79, 0x79, 0xf5, 0xf0, 0x48, 0x89, 0x5e,
      0x0d, 0x5c, 0xb7, 0xd9, 0x82, 0x34, 0x21, 0x80,
      0xd0, 0xf0, 0x77, 0x78, 0x22, 0xaf, 0x2f, 0x77,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_motorctrl_interfaces
const rosidl_type_hash_t *
motorctrl_interfaces__srv__GetUARTs_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8d, 0xaf, 0xfb, 0xb6, 0x4b, 0xe1, 0x67, 0x1c,
      0x7f, 0xa8, 0x36, 0x24, 0xee, 0x63, 0x55, 0xf1,
      0x70, 0x80, 0x0c, 0x39, 0x5e, 0x60, 0xc2, 0x49,
      0x54, 0x5d, 0x32, 0x0f, 0xef, 0x08, 0xfc, 0x59,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_motorctrl_interfaces
const rosidl_type_hash_t *
motorctrl_interfaces__srv__GetUARTs_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0c, 0x8a, 0x48, 0xa8, 0xa2, 0x0a, 0x37, 0x3a,
      0x48, 0xb1, 0x08, 0xfc, 0x5d, 0x35, 0x7d, 0x56,
      0xb2, 0xf1, 0x1d, 0xde, 0x1a, 0xdf, 0xaa, 0xce,
      0x27, 0xd9, 0x82, 0xee, 0xca, 0xb3, 0x2b, 0x95,
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

static char motorctrl_interfaces__srv__GetUARTs__TYPE_NAME[] = "motorctrl_interfaces/srv/GetUARTs";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char motorctrl_interfaces__srv__GetUARTs_Event__TYPE_NAME[] = "motorctrl_interfaces/srv/GetUARTs_Event";
static char motorctrl_interfaces__srv__GetUARTs_Request__TYPE_NAME[] = "motorctrl_interfaces/srv/GetUARTs_Request";
static char motorctrl_interfaces__srv__GetUARTs_Response__TYPE_NAME[] = "motorctrl_interfaces/srv/GetUARTs_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char motorctrl_interfaces__srv__GetUARTs__FIELD_NAME__request_message[] = "request_message";
static char motorctrl_interfaces__srv__GetUARTs__FIELD_NAME__response_message[] = "response_message";
static char motorctrl_interfaces__srv__GetUARTs__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field motorctrl_interfaces__srv__GetUARTs__FIELDS[] = {
  {
    {motorctrl_interfaces__srv__GetUARTs__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {motorctrl_interfaces__srv__GetUARTs_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__GetUARTs__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {motorctrl_interfaces__srv__GetUARTs_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__GetUARTs__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {motorctrl_interfaces__srv__GetUARTs_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription motorctrl_interfaces__srv__GetUARTs__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__GetUARTs_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__GetUARTs_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__GetUARTs_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motorctrl_interfaces__srv__GetUARTs__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motorctrl_interfaces__srv__GetUARTs__TYPE_NAME, 33, 33},
      {motorctrl_interfaces__srv__GetUARTs__FIELDS, 3, 3},
    },
    {motorctrl_interfaces__srv__GetUARTs__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = motorctrl_interfaces__srv__GetUARTs_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = motorctrl_interfaces__srv__GetUARTs_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = motorctrl_interfaces__srv__GetUARTs_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char motorctrl_interfaces__srv__GetUARTs_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field motorctrl_interfaces__srv__GetUARTs_Request__FIELDS[] = {
  {
    {motorctrl_interfaces__srv__GetUARTs_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motorctrl_interfaces__srv__GetUARTs_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motorctrl_interfaces__srv__GetUARTs_Request__TYPE_NAME, 41, 41},
      {motorctrl_interfaces__srv__GetUARTs_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char motorctrl_interfaces__srv__GetUARTs_Response__FIELD_NAME__uart_names[] = "uart_names";

static rosidl_runtime_c__type_description__Field motorctrl_interfaces__srv__GetUARTs_Response__FIELDS[] = {
  {
    {motorctrl_interfaces__srv__GetUARTs_Response__FIELD_NAME__uart_names, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motorctrl_interfaces__srv__GetUARTs_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motorctrl_interfaces__srv__GetUARTs_Response__TYPE_NAME, 42, 42},
      {motorctrl_interfaces__srv__GetUARTs_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char motorctrl_interfaces__srv__GetUARTs_Event__FIELD_NAME__info[] = "info";
static char motorctrl_interfaces__srv__GetUARTs_Event__FIELD_NAME__request[] = "request";
static char motorctrl_interfaces__srv__GetUARTs_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field motorctrl_interfaces__srv__GetUARTs_Event__FIELDS[] = {
  {
    {motorctrl_interfaces__srv__GetUARTs_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__GetUARTs_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {motorctrl_interfaces__srv__GetUARTs_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__GetUARTs_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {motorctrl_interfaces__srv__GetUARTs_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription motorctrl_interfaces__srv__GetUARTs_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__GetUARTs_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {motorctrl_interfaces__srv__GetUARTs_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motorctrl_interfaces__srv__GetUARTs_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motorctrl_interfaces__srv__GetUARTs_Event__TYPE_NAME, 39, 39},
      {motorctrl_interfaces__srv__GetUARTs_Event__FIELDS, 3, 3},
    },
    {motorctrl_interfaces__srv__GetUARTs_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = motorctrl_interfaces__srv__GetUARTs_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = motorctrl_interfaces__srv__GetUARTs_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "string[] uart_names";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
motorctrl_interfaces__srv__GetUARTs__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motorctrl_interfaces__srv__GetUARTs__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 23, 23},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
motorctrl_interfaces__srv__GetUARTs_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motorctrl_interfaces__srv__GetUARTs_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
motorctrl_interfaces__srv__GetUARTs_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motorctrl_interfaces__srv__GetUARTs_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
motorctrl_interfaces__srv__GetUARTs_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motorctrl_interfaces__srv__GetUARTs_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motorctrl_interfaces__srv__GetUARTs__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motorctrl_interfaces__srv__GetUARTs__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *motorctrl_interfaces__srv__GetUARTs_Event__get_individual_type_description_source(NULL);
    sources[3] = *motorctrl_interfaces__srv__GetUARTs_Request__get_individual_type_description_source(NULL);
    sources[4] = *motorctrl_interfaces__srv__GetUARTs_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motorctrl_interfaces__srv__GetUARTs_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motorctrl_interfaces__srv__GetUARTs_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motorctrl_interfaces__srv__GetUARTs_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motorctrl_interfaces__srv__GetUARTs_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motorctrl_interfaces__srv__GetUARTs_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motorctrl_interfaces__srv__GetUARTs_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *motorctrl_interfaces__srv__GetUARTs_Request__get_individual_type_description_source(NULL);
    sources[3] = *motorctrl_interfaces__srv__GetUARTs_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
