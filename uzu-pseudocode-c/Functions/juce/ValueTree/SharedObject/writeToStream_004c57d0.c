// Function : writeToStream
// Namespace: juce:ValueTree:SharedObject
// Entry    : 004c57d0
// Prototype: undefined writeToStream(SharedObject * this, long * param_1)
// Body     : 004c57d0 - 004c5a06


/* juce::ValueTree::SharedObject::writeToStream(juce::OutputStream&) const */

void __thiscall juce::ValueTree::SharedObject::writeToStream(SharedObject *this,long *param_1)

{
  int iVar1;
  undefined1 *in_RAX;
  int *piVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *local_38;
  
  local_38 = in_RAX;
  (**(code **)(*param_1 + 0xa0))(param_1,this + 0x10);
  (**(code **)(*param_1 + 0x98))(param_1,*(undefined4 *)(this + 0x24));
  lVar3 = 8;
  uVar6 = 0;
  do {
    if ((long)(int)*(uint *)(this + 0x24) <= (long)uVar6) {
      (**(code **)(*param_1 + 0x98))(param_1,*(undefined4 *)(this + 0x34));
      if ((long)*(int *)(this + 0x34) != 0) {
        lVar3 = *(long *)(this + 0x28);
        lVar7 = (long)*(int *)(this + 0x34) * 8;
        lVar4 = 0;
        do {
          while (*(SharedObject **)(lVar3 + lVar4) != (SharedObject *)0x0) {
            writeToStream(*(SharedObject **)(lVar3 + lVar4),param_1);
            lVar4 = lVar4 + 8;
            if (lVar7 == lVar4) {
              return;
            }
          }
          local_38 = &DAT_0061ac58;
                    /* try { // try from 004c59a8 to 004c59b3 has its CatchHandler @ 004c5a07 */
          (**(code **)(*param_1 + 0xa0))(param_1,&local_38);
          piVar2 = (int *)(local_38 + -0x10);
          if (piVar2 != &emptyString) {
            LOCK();
            iVar1 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              operator_delete__(piVar2);
            }
          }
          (**(code **)(*param_1 + 0x98))(param_1,0);
          (**(code **)(*param_1 + 0x98))(param_1,0);
          lVar4 = lVar4 + 8;
        } while (lVar7 != lVar4);
      }
      return;
    }
    if (uVar6 < *(uint *)(this + 0x24)) {
      local_38 = *(undefined1 **)(*(long *)(this + 0x18) + -8 + lVar3);
      piVar2 = (int *)(local_38 + -0x10);
      if (piVar2 != &emptyString) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
    }
    else {
      local_38 = &DAT_0061ac58;
    }
                    /* try { // try from 004c587e to 004c5889 has its CatchHandler @ 004c5a09 */
    (**(code **)(*param_1 + 0xa0))(param_1,&local_38);
    piVar2 = (int *)(local_38 + -0x10);
    if (piVar2 == &emptyString) {
LAB_004c58a8:
      if (*(uint *)(this + 0x24) <= uVar6) goto LAB_004c58b5;
LAB_004c5820:
      plVar5 = (long *)(*(long *)(this + 0x18) + lVar3);
    }
    else {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 != 0) goto LAB_004c58a8;
      operator_delete__(piVar2);
      if (uVar6 < *(uint *)(this + 0x24)) goto LAB_004c5820;
LAB_004c58b5:
      plVar5 = (long *)&getNullVarRef()::nullVar;
      if (getNullVarRef()::nullVar == '\0') {
        iVar1 = __cxa_guard_acquire(&getNullVarRef()::nullVar);
        plVar5 = (long *)&getNullVarRef()::nullVar;
        if (iVar1 != 0) {
          getNullVarRef()::nullVar = &var::Instance::attributesVoid;
          __cxa_atexit(var::~var,&getNullVarRef()::nullVar,&__dso_handle);
          __cxa_guard_release(&getNullVarRef()::nullVar);
          plVar5 = (long *)&getNullVarRef()::nullVar;
        }
      }
    }
    (**(code **)(*plVar5 + 0x70))(plVar5 + 1,param_1);
    uVar6 = uVar6 + 1;
    lVar3 = lVar3 + 0x18;
  } while( true );
}


