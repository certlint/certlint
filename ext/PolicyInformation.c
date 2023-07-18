/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "asn1/rfc5280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#include "PolicyInformation.h"

static int
memb_policyQualifiers_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_policyQualifiers_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PolicyQualifierInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_policyQualifiers_tags_3[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_policyQualifiers_specs_3 = {
	sizeof(struct PolicyInformation__policyQualifiers),
	offsetof(struct PolicyInformation__policyQualifiers, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_policyQualifiers_3 = {
	"policyQualifiers",
	"policyQualifiers",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_policyQualifiers_tags_3,
	sizeof(asn_DEF_policyQualifiers_tags_3)
		/sizeof(asn_DEF_policyQualifiers_tags_3[0]), /* 1 */
	asn_DEF_policyQualifiers_tags_3,	/* Same as above */
	sizeof(asn_DEF_policyQualifiers_tags_3)
		/sizeof(asn_DEF_policyQualifiers_tags_3[0]), /* 1 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_policyQualifiers_3,
	1,	/* Single element */
	&asn_SPC_policyQualifiers_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PolicyInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PolicyInformation, policyIdentifier),
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_CertPolicyId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"policyIdentifier"
		},
	{ ATF_POINTER, 1, offsetof(struct PolicyInformation, policyQualifiers),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_policyQualifiers_3,
		0,
		{ 0, 0,  memb_policyQualifiers_constraint_1 },
		0, 0, /* No default value */
		"policyQualifiers"
		},
};
static const ber_tlv_tag_t asn_DEF_PolicyInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PolicyInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (6 << 2)), 0, 0, 0 }, /* policyIdentifier */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 } /* policyQualifiers */
};
asn_SEQUENCE_specifics_t asn_SPC_PolicyInformation_specs_1 = {
	sizeof(struct PolicyInformation),
	offsetof(struct PolicyInformation, _asn_ctx),
	asn_MAP_PolicyInformation_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PolicyInformation = {
	"PolicyInformation",
	"PolicyInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_PolicyInformation_tags_1,
	sizeof(asn_DEF_PolicyInformation_tags_1)
		/sizeof(asn_DEF_PolicyInformation_tags_1[0]), /* 1 */
	asn_DEF_PolicyInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_PolicyInformation_tags_1)
		/sizeof(asn_DEF_PolicyInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PolicyInformation_1,
	2,	/* Elements count */
	&asn_SPC_PolicyInformation_specs_1	/* Additional specs */
};

