// Function : collect_features_hangul
// Namespace: 
// Entry    : 004218c0
// Prototype: undefined collect_features_hangul(long param_1)
// Body     : 004218c0 - 0042195f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* collect_features_hangul(hb_ot_shape_planner_t*) */

void __cdecl collect_features_hangul(long param_1)

{
  hb_vector_t<hb_ot_map_builder_t::feature_info_t,false> *this;
  undefined8 *puVar1;
  
  this = (hb_vector_t<hb_ot_map_builder_t::feature_info_t,false> *)(param_1 + 0x78);
  puVar1 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar1 = 0x6c6a6d6f;
  *(undefined4 *)((long)puVar1 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar1[1] = 1;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)((long)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x74);
  puVar1 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar1 = 0x766a6d6f;
  *(undefined4 *)((long)puVar1 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar1[1] = 1;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)((long)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x74);
  puVar1 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push(this);
  *(undefined4 *)puVar1 = 0x746a6d6f;
  *(undefined4 *)((long)puVar1 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar1[1] = 1;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)((long)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x74);
  return;
}


