// Function : callListeners<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}>
// Namespace: juce:ValueTree:SharedObject
// Entry    : 004c3cc0
// Prototype: void callListeners<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}>(long param_1, long * param_2, undefined8 param_3, undefined8 param_4)
// Body     : 004c3cc0 - 004c3e37


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void 
   juce::ValueTree::SharedObject::callListeners<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier
   const&,
   juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}>(juce::ValueTree::Listener*,
   juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier const&,
   juce::ValueTree::Listener*)::{lambda(juce::ValueTree::Listener&)#1}) const */

void __cdecl
juce::ValueTree::SharedObject::
callListeners<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::_lambda(juce::ValueTree::Listener&)_1_>
          (long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  void *__src;
  ulong *__dest;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar2 = *(uint *)(param_1 + 0x44);
  uVar3 = (ulong)(int)uVar2;
  if (uVar3 != 0) {
    local_40 = param_3;
    local_38 = param_4;
    if (uVar2 != 1) {
      if ((int)uVar2 < 1) {
        __dest = (ulong *)0x0;
      }
      else {
        __src = *(void **)(param_1 + 0x38);
        uVar4 = uVar2 + (uVar2 >> 1) + 8 & 0xfffffff8;
        if ((int)uVar4 < 1) {
          __dest = (ulong *)0x0;
        }
        else {
          __dest = malloc((ulong)uVar4 << 3);
        }
        memcpy(__dest,__src,(ulong)uVar2 << 3);
      }
      puVar1 = __dest + uVar3;
      uVar7 = 0;
      puVar6 = __dest;
      if (uVar2 == 0) goto LAB_004c3d90;
LAB_004c3d70:
      uVar5 = *puVar6;
      if (*(ulong *)(*(long *)(param_1 + 0x38) + uVar7 * 8) != uVar5) goto LAB_004c3d9b;
LAB_004c3df0:
                    /* try { // try from 004c3df4 to 004c3e00 has its CatchHandler @ 004c3e38 */
      ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>
      ::
      callCheckedExcluding<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::_lambda(juce::ValueTree::Listener&)_1_&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
                ((long *)(uVar5 + 8),param_2,&local_40);
LAB_004c3e01:
      do {
        puVar6 = puVar6 + 1;
        if (puVar6 == puVar1) {
          free(__dest);
          return;
        }
        uVar7 = uVar7 + 1;
        uVar3 = (ulong)*(uint *)(param_1 + 0x44);
        if (uVar7 < uVar3) goto LAB_004c3d70;
LAB_004c3d90:
        uVar5 = *puVar6;
        if (uVar5 == 0) goto LAB_004c3df0;
LAB_004c3d9b:
        if (0 < (int)uVar3) {
          uVar2 = 0;
          do {
            while( true ) {
              if (uVar5 == *(ulong *)(*(long *)(param_1 + 0x38) + (long)(int)uVar2 * 8)) {
                if (-1 < (int)uVar2) goto LAB_004c3df0;
                goto LAB_004c3e01;
              }
              uVar4 = (int)(uVar2 + (int)uVar3) / 2;
              if (uVar4 == uVar2) goto LAB_004c3e01;
              if (*(ulong *)(*(long *)(param_1 + 0x38) + (long)(int)uVar4 * 8) <= uVar5) break;
              uVar3 = (ulong)uVar4;
              if ((int)uVar4 <= (int)uVar2) goto LAB_004c3e01;
            }
            uVar2 = uVar4;
          } while ((int)uVar4 < (int)uVar3);
        }
      } while( true );
    }
    ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>
    ::
    callCheckedExcluding<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::_lambda(juce::ValueTree::Listener&)_1_&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
              ((long *)(**(long **)(param_1 + 0x38) + 8),param_2,&local_40);
  }
  return;
}


