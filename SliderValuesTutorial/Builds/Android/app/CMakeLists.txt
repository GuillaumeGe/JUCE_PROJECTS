# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

cmake_minimum_required(VERSION 3.4.1)

SET(BINARY_NAME "juce_jni")

add_library("cpufeatures" STATIC "${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c")
set_source_files_properties("${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c" PROPERTIES COMPILE_FLAGS "-Wno-sign-conversion -Wno-gnu-statement-expression")

add_definitions("-DJUCE_ANDROID=1" "-DJUCE_ANDROID_API_VERSION=10" "-DJUCE_ANDROID_ACTIVITY_CLASSNAME=com_yourcompany_slidervaluestutorial_SliderValuesTutorial" "-DJUCE_ANDROID_ACTIVITY_CLASSPATH=\"com/yourcompany/slidervaluestutorial/SliderValuesTutorial\"" "-DJUCE_ANDROID_SHARING_CONTENT_PROVIDER_CLASSNAME=com_yourcompany_slidervaluestutorial_SharingContentProvider" "-DJUCE_ANDROID_SHARING_CONTENT_PROVIDER_CLASSPATH=\"com/yourcompany/slidervaluestutorial/SharingContentProvider\"" "-DJUCE_PUSH_NOTIFICATIONS=1" "-DJUCER_ANDROIDSTUDIO_7F0E4A25=1" "-DJUCE_APP_VERSION=1.0.0" "-DJUCE_APP_VERSION_HEX=0x10000")

include_directories( AFTER
    "../../../JuceLibraryCode"
    "C:/Users/Guillaume/Desktop/juce-5.3.2-windows/JUCE/modules"
    "${ANDROID_NDK}/sources/android/cpufeatures"
)

enable_language(ASM)

IF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    add_definitions("-DDEBUG=1" "-D_DEBUG=1")
ELSEIF(JUCE_BUILD_CONFIGURATION MATCHES "RELEASE")
    add_definitions("-DNDEBUG=1")
ELSE(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    MESSAGE( FATAL_ERROR "No matching build-configuration found." )
ENDIF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")

add_library( ${BINARY_NAME}

    SHARED

    "../../../Source/Main.cpp"
    "../../../Source/SliderValuesTutorial_01.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_AbstractFifo.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_Array.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_DynamicObject.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_ElementComparator.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_HashMap.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_ListenerList.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_NamedValueSet.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_OwnedArray.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_PropertySet.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_PropertySet.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_SortedSet.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_SparseSet.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_SparseSet.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_Variant.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_Variant.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_DirectoryIterator.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_File.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_File.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_FileFilter.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_FileFilter.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_FileInputStream.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_FileInputStream.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_FileOutputStream.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_FileSearchPath.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_TemporaryFile.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/javascript/juce_Javascript.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/javascript/juce_Javascript.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/javascript/juce_JSON.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/javascript/juce_JSON.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/logging/juce_FileLogger.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/logging/juce_FileLogger.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/logging/juce_Logger.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/logging/juce_Logger.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_BigInteger.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_BigInteger.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_Expression.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_Expression.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_MathsFunctions.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_NormalisableRange.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_Random.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_Random.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_Range.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_Atomic.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_ByteOrder.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_HeapBlock.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_Memory.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_MemoryBlock.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_ScopedPointer.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_Singleton.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_WeakReference.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_Result.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_Result.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_Uuid.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_Uuid.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_android_Files.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_android_Misc.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_android_Network.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_android_Threads.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_curl_Network.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_linux_Files.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_linux_Network.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_linux_Threads.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_mac_Files.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_mac_Network.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_mac_Strings.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_mac_Threads.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_posix_SharedCode.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_win32_Files.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_win32_Network.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_win32_Registry.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_win32_Threads.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_IPAddress.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_IPAddress.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_MACAddress.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_MACAddress.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_NamedPipe.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_NamedPipe.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_Socket.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_Socket.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_URL.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_URL.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_WebInputStream.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_WebInputStream.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_FileInputSource.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_InputSource.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_InputStream.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_InputStream.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_OutputStream.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_OutputStream.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_SubregionStream.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_URLInputSource.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/system/juce_CompilerSupport.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/system/juce_PlatformDefs.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/system/juce_StandardHeader.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/system/juce_SystemStats.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/system/juce_SystemStats.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/system/juce_TargetPlatform.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_Base64.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_Base64.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_CharacterFunctions.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_Identifier.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_Identifier.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_LocalisedStrings.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_NewLine.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_String.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_String.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_StringArray.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_StringArray.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_StringPairArray.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_StringPairArray.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_StringPool.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_StringPool.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_StringRef.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_TextDiff.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_TextDiff.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ChildProcess.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_CriticalSection.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_InterProcessLock.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_Process.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ScopedLock.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_SpinLock.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_Thread.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_Thread.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ThreadPool.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_WaitableEvent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/time/juce_PerformanceCounter.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/time/juce_RelativeTime.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/time/juce_RelativeTime.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/time/juce_Time.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/time/juce_Time.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/xml/juce_XmlDocument.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/xml/juce_XmlElement.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/xml/juce_XmlElement.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/adler32.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/compress.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/crc32.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/crc32.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/deflate.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/deflate.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/infback.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/inffast.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/inffast.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/inffixed.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/inflate.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/inflate.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/inftrees.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/inftrees.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/trees.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/trees.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/uncompr.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/zconf.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/zconf.in.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/zlib.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/zutil.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/zutil.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/juce_ZipFile.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/juce_ZipFile.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/juce_core.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/juce_core.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/juce_core.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_CachedValue.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_Value.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_Value.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_ValueTree.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/juce_data_structures.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/juce_data_structures.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/juce_data_structures.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_ApplicationBase.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_CallbackMessage.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_Initialisation.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_Message.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_MessageListener.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_MessageListener.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_MessageManager.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_MessageManager.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_NotificationType.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_android_Messaging.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_linux_EventLoop.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/timers/juce_MultiTimer.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/timers/juce_Timer.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/timers/juce_Timer.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/juce_events.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/juce_events.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/juce_events.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_Colour.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_Colour.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_Colours.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_Colours.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_FillType.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_FillType.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_Font.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_Font.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_Typeface.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_Line.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_Path.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_Path.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_Point.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/png.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/png.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/images/juce_Image.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/images/juce_Image.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/images/juce_ImageCache.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/placement/juce_Justification.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/juce_graphics.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/juce_graphics.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/juce_graphics.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/application/juce_Application.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/application/juce_Application.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_Button.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_Component.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_Component.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_Desktop.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_Desktop.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_Grid.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_Label.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/juce_gui_basics.mm"
    "../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/juce_gui_basics.h"
    "../../../JuceLibraryCode/AppConfig.h"
    "../../../JuceLibraryCode/include_juce_core.cpp"
    "../../../JuceLibraryCode/include_juce_data_structures.cpp"
    "../../../JuceLibraryCode/include_juce_events.cpp"
    "../../../JuceLibraryCode/include_juce_graphics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_basics.cpp"
    "../../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties("../../../Source/SliderValuesTutorial_01.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_SparseSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/streams/juce_URLInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_Colour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_Colour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_Colours.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_Colours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_FillType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_FillType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_Font.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_Font.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/fonts/juce_Typeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_Line.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_Path.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_Path.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_Point.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/png.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/png.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/images/juce_Image.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/images/juce_Image.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/images/juce_ImageCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/placement/juce_Justification.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/application/juce_Application.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/application/juce_Application.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_Button.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_Component.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_Component.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_Desktop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_Desktop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_Grid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_Label.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Desktop/juce-5.3.2-windows/JUCE/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

find_library(log "log")
find_library(android "android")
find_library(glesv2 "GLESv2")
find_library(egl "EGL")

target_link_libraries( ${BINARY_NAME}

    ${log}
    ${android}
    ${glesv2}
    ${egl}
    "cpufeatures"
)
