#define RINGSIZE 1024*1024*1024*1    /* 1GB */
#define WRITESIZE 65536        /* usual write chunk size - must be 2^N */
#define SNAP_LEN 96        /* apparently what tcpdump uses for -s 0 (original is 65535) */
#define PACKET_BUFFER_TIMEOUT 1000 /* set at 1000 works (original is 0)*/

#define KAFKA_MESSAGE_SIZE 524288 /*equals to 0.5 MB*/
#define NETWORK_CARD_INTERFACE_NAME "eth0"
#define KAFKA_BROKERS "kafka1.msisc.com:9093,kafka2.msisc.com:9093"
#define KAFKA_TOPIC "packetcapture"
#define KAFKA_SECURE_PROTOCOL  "SSL"
#define  CERTIFICATE_LOCATION  "/ssl/kafka.crt"
#define  CERTIFICATE_KEY_LOCATION  "/ssl/kafka.key"
#define  CA_CERTIFICATE_LOCATION  "/ssl/ca.crt"
#define  KAFKA_BUFFER_MAX_MESSAGES  "5000000"
