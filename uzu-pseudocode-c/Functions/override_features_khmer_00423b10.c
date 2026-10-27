// Function : override_features_khmer
// Namespace: 
// Entry    : 00423b10
// Prototype: undefined override_features_khmer(long param_1)
// Body     : 00423b10 - 00423c89


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* override_features_khmer(hb_ot_shape_planner_t*) */

void __cdecl override_features_khmer(long param_1)

{
  hb_vector_t<hb_ot_map_builder_t::feature_info_t,false> *this;
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  char *__s;
  char *pcVar4;
  size_t sVar5;
  byte bVar6;
  byte bVar7;
  
  this = (hb_vector_t<hb_ot_map_builder_t::feature_info_t,false> *)(param_1 + 0x78);
  puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar3 = 0x636c6967;
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar3[1] = 0x100000001;
  *(undefined4 *)(puVar3 + 2) = 1;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  uVar1 = _hb_options_0;
  if (_hb_options_0 == 0) {
    __s = getenv("HB_OPTIONS");
    uVar1 = 2;
    if ((__s != (char *)0x0) && (*__s != '\0')) {
      bVar7 = 2;
      do {
        pcVar4 = strchr(__s,0x3a);
        if (pcVar4 == (char *)0x0) {
          sVar5 = strlen(__s);
          pcVar4 = __s + sVar5;
        }
        iVar2 = strncmp(__s,"uniscribe-bug-compatible",(long)pcVar4 - (long)__s);
        bVar6 = bVar7 | 4;
        if ((long)pcVar4 - (long)__s != 0x18) {
          bVar6 = bVar7;
        }
        if (iVar2 != 0) {
          bVar6 = bVar7;
        }
        bVar7 = bVar6;
        __s = pcVar4 + (*pcVar4 != '\0');
      } while (*__s != '\0');
      uVar1 = (uint)bVar7;
    }
  }
  _hb_options_0 = uVar1;
  if ((_hb_options_0 & 4) != 0) {
    puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
    *(undefined4 *)puVar3 = 0x6b65726e;
    *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
    puVar3[1] = 0x100000000;
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  }
  puVar3 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar3 = 0x6c696761;
  *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar3[1] = 0x100000000;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_1 + 0x74);
  return;
}


