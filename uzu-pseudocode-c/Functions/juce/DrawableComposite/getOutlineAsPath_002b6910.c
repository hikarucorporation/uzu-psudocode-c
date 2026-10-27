// Function : getOutlineAsPath
// Namespace: juce:DrawableComposite
// Entry    : 002b6910
// Prototype: Path * getOutlineAsPath(Path * param_1, long param_2)
// Body     : 002b6910 - 002b6a0f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::DrawableComposite::getOutlineAsPath() const */

Path * __cdecl juce::DrawableComposite::getOutlineAsPath(Path *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined8 __ptr;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  long lVar8;
  undefined1 local_58 [16];
  undefined8 local_48;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0x20] = (Path)0x1;
  iVar1 = *(int *)(param_2 + 100);
  if ((long)iVar1 != 0) {
    lVar2 = *(long *)(param_2 + 0x58);
    lVar8 = 0;
    do {
      lVar3 = *(long *)(lVar2 + lVar8);
      if (lVar3 != 0) {
        plVar7 = (long *)__dynamic_cast(lVar3,&Component::typeinfo,&Drawable::typeinfo,0);
        if (plVar7 != (long *)0x0) {
                    /* try { // try from 002b6987 to 002b6994 has its CatchHandler @ 002b6a10 */
          (**(code **)(*plVar7 + 0x1a0))(local_58,plVar7);
          Path::addPath(param_1,local_58._0_8_,local_58._12_4_);
          auVar5 = local_58;
          local_58._12_4_ = 0;
          auVar6 = local_58;
          local_58._0_8_ = auVar5._0_8_;
          __ptr = local_58._0_8_;
          local_58 = auVar6;
          free((void *)__ptr);
        }
      }
      lVar8 = lVar8 + 8;
    } while ((long)iVar1 * 8 != lVar8);
  }
  pauVar4 = *(undefined1 (**) [16])(param_2 + 0x50);
  if (pauVar4 == (undefined1 (*) [16])0x0) {
    local_58 = ZEXT416(DAT_005d9038);
    local_48 = 0x3f800000;
  }
  else {
    local_48 = *(undefined8 *)pauVar4[1];
    local_58 = *pauVar4;
  }
  Path::applyTransform(param_1,(float *)local_58);
  return param_1;
}


