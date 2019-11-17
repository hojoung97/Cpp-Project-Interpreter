//
// Created by Hojoung Jang on 11/1/19.
//

#include "sub.h"

Sub::Sub() {

}

Sub::~Sub() {

}

int Sub::execute(Interpreter &interpreter) {
    if ((interpreter.rstacks[interpreter.sp - 1])->dtype == "short"){
        short val1 = interpreter.rstacks[interpreter.sp - 1]->getShort();

        if ((interpreter.rstacks[interpreter.sp])->dtype == "short"){
            short val2 = interpreter.rstacks[interpreter.sp]->getShort();
            short newShort = val1 - val2;
            interpreter.rstacks[interpreter.sp - 1] = new Value(newShort);

        } else if ((interpreter.rstacks[interpreter.sp])->dtype == "int"){
            int val2 = interpreter.rstacks[interpreter.sp]->getInt();
            short newShort = val1 - val2;
            interpreter.rstacks[interpreter.sp - 1] = new Value(newShort);

        } else if ((interpreter.rstacks[interpreter.sp])->dtype == "float"){
            float val2 = interpreter.rstacks[interpreter.sp]->getFloat();
            short newShort = val1 - val2;
            interpreter.rstacks[interpreter.sp - 1] = new Value(newShort);

        } else if ((interpreter.rstacks[interpreter.sp])->dtype == "char"){
            char val2 = interpreter.rstacks[interpreter.sp]->getChar();
            short newShort = val1 - val2;
            interpreter.rstacks[interpreter.sp - 1] = new Value(newShort);
        }

    } else if ((interpreter.rstacks[interpreter.sp - 1])->dtype == "int"){
        int val1 = interpreter.rstacks[interpreter.sp - 1]->getInt();

        if ((interpreter.rstacks[interpreter.sp])->dtype == "short"){
            short val2 = interpreter.rstacks[interpreter.sp]->getShort();
            int newInt = val1 - val2;
            interpreter.rstacks[interpreter.sp - 1] = new Value(newInt);

        } else if ((interpreter.rstacks[interpreter.sp])->dtype == "int"){
            int val2 = interpreter.rstacks[interpreter.sp]->getInt();
            int newInt = val1 - val2;
            interpreter.rstacks[interpreter.sp - 1] = new Value(newInt);

        } else if ((interpreter.rstacks[interpreter.sp])->dtype == "float"){
            float val2 = interpreter.rstacks[interpreter.sp]->getFloat();
            int newInt = val1 - val2;
            interpreter.rstacks[interpreter.sp - 1] = new Value(newInt);

        } else if ((interpreter.rstacks[interpreter.sp])->dtype == "char"){
            char val2 = interpreter.rstacks[interpreter.sp]->getChar();
            int newInt = val1 - val2;
            interpreter.rstacks[interpreter.sp - 1] = new Value(newInt);
        }

    } else if ((interpreter.rstacks[interpreter.sp - 1])->dtype == "float"){
        float val1 = interpreter.rstacks[interpreter.sp - 1]->getFloat();

        if ((interpreter.rstacks[interpreter.sp])->dtype == "short"){
            short val2 = interpreter.rstacks[interpreter.sp]->getShort();
            float newFloat = val1 - val2;
            interpreter.rstacks[interpreter.sp - 1] = new Value(newFloat);

        } else if ((interpreter.rstacks[interpreter.sp])->dtype == "int"){
            int val2 = interpreter.rstacks[interpreter.sp]->getInt();
            float newFloat = val1 - val2;
            interpreter.rstacks[interpreter.sp - 1] = new Value(newFloat);

        } else if ((interpreter.rstacks[interpreter.sp])->dtype == "float"){
            float val2 = interpreter.rstacks[interpreter.sp]->getFloat();
            float newFloat = val1 - val2;
            interpreter.rstacks[interpreter.sp - 1] = new Value(newFloat);

        } else if ((interpreter.rstacks[interpreter.sp])->dtype == "char"){
            char val2 = interpreter.rstacks[interpreter.sp]->getChar();
            float newFloat = val1 - val2;
            interpreter.rstacks[interpreter.sp - 1] = new Value(newFloat);
        }

    } else if ((interpreter.rstacks[interpreter.sp - 1])->dtype == "char"){
        char val1 = interpreter.rstacks[interpreter.sp - 1]->getChar();

        if ((interpreter.rstacks[interpreter.sp])->dtype == "short"){
            short val2 = interpreter.rstacks[interpreter.sp]->getShort();
            char newChar = (+val1) - (+val2);
            interpreter.rstacks[interpreter.sp - 1] = new Value(newChar);

        } else if ((interpreter.rstacks[interpreter.sp])->dtype == "int"){
            int val2 = interpreter.rstacks[interpreter.sp]->getInt();
            char newChar = (+val1) - (+val2);
            interpreter.rstacks[interpreter.sp - 1] = new Value(newChar);

        } else if ((interpreter.rstacks[interpreter.sp])->dtype == "float"){
            float val2 = interpreter.rstacks[interpreter.sp]->getFloat();
            char newChar = (+val1) - (+val2);
            interpreter.rstacks[interpreter.sp - 1] = new Value(newChar);

        } else if ((interpreter.rstacks[interpreter.sp])->dtype == "char"){
            char val2 = interpreter.rstacks[interpreter.sp]->getChar();
            char newChar = (+val1) - (+val2);
            interpreter.rstacks[interpreter.sp - 1] = new Value(newChar);
        }

    }

    (interpreter.sp)--;

    return 1;
}
