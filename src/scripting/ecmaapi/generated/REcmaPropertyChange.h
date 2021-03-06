// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMAPROPERTYCHANGE_H
        #define RECMAPROPERTYCHANGE_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RPropertyChange.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaPropertyChange {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        setOldValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOldValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setNewValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getNewValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPropertyTypeId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPropertyTypeId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RPropertyChange* getSelf(const QString& fName, QScriptContext* context)
    ;static RPropertyChange* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    