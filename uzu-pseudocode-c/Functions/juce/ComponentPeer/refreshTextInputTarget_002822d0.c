// Function : refreshTextInputTarget
// Namespace: juce:ComponentPeer
// Entry    : 002822d0
// Prototype: undefined refreshTextInputTarget(ComponentPeer * this)
// Body     : 002822d0 - 00282484


/* juce::ComponentPeer::refreshTextInputTarget() */

void __thiscall juce::ComponentPeer::refreshTextInputTarget(ComponentPeer *this)

{
  long *plVar1;
  float *pfVar2;
  char cVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  ulong local_38;
  long local_30;
  undefined1 *local_28;
  
  if (Component::currentlyFocusedComponent != *(long *)(this + 8)) {
    plVar4 = (long *)0x0;
    lVar6 = Component::currentlyFocusedComponent;
    do {
      if (lVar6 == 0) goto LAB_00282344;
      lVar6 = *(long *)(lVar6 + 0x30);
    } while (lVar6 != *(long *)(this + 8));
  }
  if (Component::currentlyFocusedComponent != 0) {
    plVar4 = (long *)__dynamic_cast(Component::currentlyFocusedComponent,&Component::typeinfo,
                                    &TextInputTarget::typeinfo,0xfffffffffffffffe);
    if (plVar4 != (long *)0x0) {
      cVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
      if (cVar3 != '\0') goto LAB_00282344;
    }
  }
  plVar4 = (long *)0x0;
LAB_00282344:
  plVar1 = *(long **)(this + 0xa0);
  *(long **)(this + 0xa0) = plVar4;
  if (plVar1 != plVar4) {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0028240d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x150))(this);
      return;
    }
    if (Component::currentlyFocusedComponent != 0) {
      uVar5 = 0;
      lVar6 = Component::currentlyFocusedComponent;
      do {
        local_38 = uVar5;
        local_30 = lVar6;
        local_28 = (undefined1 *)&local_38;
        uVar5 = detail::ComponentHelpers::
                convertToParentSpace<juce::Point<int>>(juce::Component_const&,juce::Point<int>)::
                {lambda()#1}::operator()((_lambda___1_ *)&local_30);
        pfVar2 = *(float **)(lVar6 + 0x50);
        if (pfVar2 != (float *)0x0) {
          fVar8 = (float)(int)(uVar5 >> 0x20);
          uVar5 = CONCAT44((int)((float)(int)uVar5 * pfVar2[3] + fVar8 * pfVar2[4] + pfVar2[5]),
                           (int)(*pfVar2 * (float)(int)uVar5 + pfVar2[1] * fVar8 + pfVar2[2]));
        }
        lVar6 = *(long *)(lVar6 + 0x30);
      } while (lVar6 != 0);
      uVar7 = (**(code **)(*(long *)this + 0x58))
                        ((float)(int)uVar5,(float)(int)(uVar5 >> 0x20),this);
      (**(code **)(*(long *)this + 0x148))
                (this,(ulong)((double)(float)uVar7 + DAT_005d9098) & 0xffffffff |
                      (long)((double)(float)((ulong)uVar7 >> 0x20) + DAT_005d9098) << 0x20,
                 *(undefined8 *)(this + 0xa0));
    }
  }
  return;
}


