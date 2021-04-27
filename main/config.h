
// Wifi info
// #define CONFIG_ESP_WIFI_SSID        "F**kingFPT"
// #define CONFIG_ESP_WIFI_PASSWORD    "12345678@X"
#define CONFIG_ESP_WIFI_SSID        "The Coffee House"
#define CONFIG_ESP_WIFI_PASSWORD    "thecoffeehouse"
#define CONFIG_ESP_MAXIMUM_RETRY    30


// MQTT info
#define CONFIG_MQTT_BROKER_URL "thingsboard.cloud"
#define PUBLISH_TELEMETRY "v1/devices/me/telemetry"
#define PUBLISH_ATTIBUTES "v1/devices/me/attributes"
#define SERVER_RPC "v1/devices/me/rpc/request/+"
#define PUBLISH_CLIENT_RPC "v1/devices/me/rpc/response/"


// TODO: this token is the chip ID.  the code will be updated following it
#define CONFIG_MQTT_TOKEN "840D8E0BC304"





const char *THINGBOARD_SERVER = "scandiasaunas.com";

const char *TOPIC_P_TELEMETRY = "v1/devices/me/telemetry";
const char *TOPIC_P_ATTRIBUTES = "v1/devices/me/attributes";
const char *TOPIC_P_CLIENT_RPC = "v1/devices/me/rpc/response/";
const char *TOPIC_S_SERVER_RPC = "v1/devices/me/rpc/request/+";
const char *TOPIC_P_CLAIM = "v1/devices/me/claim";

const uint64_t CLAIM_TIMEOUT = 60000 * 5;
