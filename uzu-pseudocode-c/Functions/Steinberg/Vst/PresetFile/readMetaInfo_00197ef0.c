// Function : readMetaInfo
// Namespace: Steinberg:Vst:PresetFile
// Entry    : 00197ef0
// Prototype: ulong readMetaInfo(PresetFile * this, long param_1, int * param_2)
// Body     : 00197ef0 - 00197fa6


/* Steinberg::Vst::PresetFile::readMetaInfo(char*, int&) */

ulong __thiscall
Steinberg::Vst::PresetFile::readMetaInfo(PresetFile *this,long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 unaff_RBP;
  ulong uVar3;
  long local_30;
  
  if (0 < (int)*(uint *)(this + 0xc28)) {
    lVar2 = 0;
    do {
      if (*(int *)(this + lVar2 + 0x28) == 0x6f666e49) {
        if (param_1 == 0) {
          iVar1 = *(int *)(this + lVar2 + 0x38);
          *param_2 = iVar1;
          uVar3 = CONCAT71((int7)((ulong)unaff_RBP >> 8),0 < iVar1);
        }
        else {
          lVar2 = *(long *)(this + lVar2 + 0x30);
          local_30 = -1;
          uVar3 = 0;
          (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),lVar2,0,&local_30);
          if (local_30 == lVar2) {
            iVar1 = (**(code **)(**(long **)(this + 8) + 0x18))
                              (*(long **)(this + 8),param_1,*param_2,param_2);
            uVar3 = (ulong)(iVar1 == 3 || iVar1 == 0);
          }
        }
        goto LAB_00197f35;
      }
      lVar2 = lVar2 + 0x18;
    } while ((ulong)*(uint *)(this + 0xc28) * 0x18 != lVar2);
  }
  uVar3 = 0;
LAB_00197f35:
  return uVar3 & 0xffffffff;
}


