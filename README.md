This benchmark is an AndroidStudio project.
It includes features:
+ w/o invocation back to Java method
+ invocation to Java Android APIs
+ mixed statical and dynamic registration of JNI functions.
+ relevant information (e.g., classes and methods name string or relevant objects) passed via customized C structures.

NOTE: this app need certain permission to obtain IMEI. For simplicity reason,
the app did not check or apply this permission in the app. Please grant it with
the relevant permission manually in the phone's **Settings**, otherwise the app
will crash.
