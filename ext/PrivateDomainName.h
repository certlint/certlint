/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc5280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_PrivateDomainName_H_
#define	_PrivateDomainName_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NumericString.h>
#include <PrintableString.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PrivateDomainName_PR {
	PrivateDomainName_PR_NOTHING,	/* No components present */
	PrivateDomainName_PR_numeric,
	PrivateDomainName_PR_printable
} PrivateDomainName_PR;

/* PrivateDomainName */
typedef struct PrivateDomainName {
	PrivateDomainName_PR present;
	union PrivateDomainName_u {
		NumericString_t	 numeric;
		PrintableString_t	 printable;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PrivateDomainName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PrivateDomainName;
extern asn_CHOICE_specifics_t asn_SPC_PrivateDomainName_specs_1;
extern asn_TYPE_member_t asn_MBR_PrivateDomainName_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PrivateDomainName_H_ */
#include <asn_internal.h>
