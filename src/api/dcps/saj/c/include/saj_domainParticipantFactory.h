
 /* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class DDS_DomainParticipantFactory */

#ifndef _Included_DDS_DomainParticipantFactory
#define _Included_DDS_DomainParticipantFactory
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     DDS_DomainParticipantFactory
 * Method:    jniGetInstance
 * Signature: ()LDDS/DomainParticipantFactory;
 */
JNIEXPORT jobject JNICALL Java_DDS_DomainParticipantFactory_jniGetInstance
  (JNIEnv *, jclass);

/*
 * Class:     DDS_DomainParticipantFactory
 * Method:    jniCreateParticipant
 * Signature: (Ljava/lang/String;LDDS/DomainParticipantQos;LDDS/DomainParticipantListener;I)LDDS/DomainParticipant;
 */
JNIEXPORT jobject JNICALL Java_DDS_DomainParticipantFactory_jniCreateParticipant
  (JNIEnv *, jobject, jstring, jobject, jobject, jint);

/*
 * Class:     DDS_DomainParticipantFactory
 * Method:    jniDeleteParticipant
 * Signature: (LDDS/DomainParticipant;)I
 */
JNIEXPORT jint JNICALL Java_DDS_DomainParticipantFactory_jniDeleteParticipant
  (JNIEnv *, jobject, jobject);

/*
 * Class:     DDS_DomainParticipantFactory
 * Method:    jniLookupParticipant
 * Signature: (Ljava/lang/String;)LDDS/DomainParticipant;
 */
JNIEXPORT jobject JNICALL Java_DDS_DomainParticipantFactory_jniLookupParticipant
  (JNIEnv *, jobject, jstring);

/*
 * Class:     DDS_DomainParticipantFactory
 * Method:    jniSetDefaultParticipantQos
 * Signature: (LDDS/DomainParticipantQos;)I
 */
JNIEXPORT jint JNICALL Java_DDS_DomainParticipantFactory_jniSetDefaultParticipantQos
  (JNIEnv *, jobject, jobject);

/*
 * Class:     DDS_DomainParticipantFactory
 * Method:    jniGetDefaultParticipantQos
 * Signature: (LDDS/DomainParticipantQosHolder;)I
 */
JNIEXPORT jint JNICALL Java_DDS_DomainParticipantFactory_jniGetDefaultParticipantQos
  (JNIEnv *, jobject, jobject);

/*
 * Class:     DDS_DomainParticipantFactory
 * Method:    jniSetQos
 * Signature: (LDDS/DomainParticipantFactoryQos;)I
 */
JNIEXPORT jint JNICALL Java_DDS_DomainParticipantFactory_jniSetQos
  (JNIEnv *, jobject, jobject);

/*
 * Class:     DDS_DomainParticipantFactory
 * Method:    jniGetQos
 * Signature: (LDDS/DomainParticipantFactoryQosHolder;)I
 */
JNIEXPORT jint JNICALL Java_DDS_DomainParticipantFactory_jniGetQos
  (JNIEnv *, jobject, jobject);

/*
 * Class:     DDS_DomainParticipantFactory
 * Method:    jniLookupDomain
 * Signature: (Ljava/lang/String;)LDDS/Domain;
 */
JNIEXPORT jobject JNICALL Java_DDS_DomainParticipantFactory_jniLookupDomain
  (JNIEnv *, jobject, jstring);

/*
 * Class:     DDS_DomainParticipantFactory
 * Method:    jniDeleteDomain
 * Signature: (LDDS/Domain;)I
 */
JNIEXPORT jint JNICALL Java_DDS_DomainParticipantFactory_jniDeleteDomain
  (JNIEnv *, jobject, jobject);

/*
 * Class:     DDS_DomainParticipantFactory
 * Method:    jniDeleteContainedEntities
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_DDS_DomainParticipantFactory_jniDeleteContainedEntities
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
