#define RINGSIZE 1024*1024*1024*1    /* 1GB */


#define KAFKA_MESSAGE_SIZE 524288 /*equals to 0.5 MB*/
#define NETWORK_CARD_INTERFACE_NAME "eth0"
#define KAFKA_BROKERS "kafka1.msisc.com:9093,kafka2.msisc.com:9093,kafka3.msisc.com:9093,kafka4.msisc.com:9093"
#define KAFKA_TOPIC "packetcapture"
#define KAFKA_SECURE_PROTOCOL  "SSL"
#define  CERTIFICATE_LOCATION  "/ssl/kafka1.crt"
#define  CERTIFICATE_KEY_LOCATION  "/ssl/kafka1.key"
#define  CA_CERTIFICATE_LOCATION  "/ssl/msisc.crt"
#define  KAFKA_BUFFER_MAX_MESSAGES  "5000000"
