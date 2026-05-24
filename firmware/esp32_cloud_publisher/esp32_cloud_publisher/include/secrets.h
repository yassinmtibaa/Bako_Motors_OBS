#pragma once

// ─── VPS backend ──────────────────────────────────────────────────────────────
// Deploy the backend/ directory to your VPS and fill in the address below.
//
// VPS_HOST   IP address or hostname of the VPS (no http://, no trailing slash)
//   Example: "203.0.113.42"
//
// VPS_PORT   TCP port the server listens on (matches --web-port / PORT env var)
//   Default: "8765"
//
// VPS_PATH   Ingest endpoint path
//   Default: "/api/ingest"
//
// VPS_API_KEY  must match the BMS_API_KEY env var set on the VPS
//   Default server value: "bako-bms-2024"

const char VPS_HOST[]    = "62.169.24.172";
const char VPS_PORT[]    = "8787";
const char VPS_PATH[]    = "/api/ingest";
const char VPS_API_KEY[] = "bako-bms-2024";

// GPRS APN — select the one matching your SIM card
#define APN      "internet.ooredoo.tn"   // Ooredoo Tunisia (default)
// #define APN   "internet"              // Orange Tunisia
// #define APN_USER ""
// #define APN_PASS ""

// Device identifier — appears in the dashboard and database
const char DEVICE_ID[] = "esp32-bms-001";
