// Function : ~unordered_map
// Namespace: std:unordered_map_juce__String_juce__XWindowSystemUtilities__XSetting_std__hash_juce__String__~46f2adfc
// Entry    : 002cff80
// Prototype: undefined ~unordered_map(unordered_map<juce::String,juce::XWindowSystemUtilities::XSetting,std::hash<juce::String>,std::equal_to<juce::String>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>> * this)
// Body     : 002cff80 - 002d0098


/* std::unordered_map<juce::String, juce::XWindowSystemUtilities::XSetting, std::hash<juce::String>,
   std::equal_to<juce::String>, std::allocator<std::pair<juce::String const,
   juce::XWindowSystemUtilities::XSetting> > >::~unordered_map() */

void __thiscall
std::
unordered_map<juce::String,juce::XWindowSystemUtilities::XSetting,std::hash<juce::String>,std::equal_to<juce::String>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>>
::~unordered_map(unordered_map<juce::String,juce::XWindowSystemUtilities::XSetting,std::hash<juce::String>,std::equal_to<juce::String>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>>
                 *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  
  puVar3 = *(undefined8 **)(this + 0x10);
  do {
    if (puVar3 == (undefined8 *)0x0) {
      memset(*(void **)this,0,*(long *)(this + 8) << 3);
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      if (this + 0x30 ==
          *(unordered_map<juce::String,juce::XWindowSystemUtilities::XSetting,std::hash<juce::String>,std::equal_to<juce::String>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>>
            **)this) {
        return;
      }
      operator_delete(*(unordered_map<juce::String,juce::XWindowSystemUtilities::XSetting,std::hash<juce::String>,std::equal_to<juce::String>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>>
                        **)this);
      return;
    }
    puVar2 = (undefined8 *)*puVar3;
    piVar4 = (int *)(puVar3[4] + -0x10);
    if (piVar4 == &juce::emptyString) {
LAB_002cffe2:
      piVar4 = (int *)(puVar3[2] + -0x10);
      if (piVar4 != &juce::emptyString) {
LAB_002cffef:
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar4);
        }
      }
    }
    else {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 != 0) goto LAB_002cffe2;
      operator_delete__(piVar4);
      piVar4 = (int *)(puVar3[2] + -0x10);
      if (piVar4 != &juce::emptyString) goto LAB_002cffef;
    }
    piVar4 = (int *)(puVar3[1] + -0x10);
    if (piVar4 != &juce::emptyString) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar4);
      }
    }
    operator_delete(puVar3);
    puVar3 = puVar2;
  } while( true );
}


