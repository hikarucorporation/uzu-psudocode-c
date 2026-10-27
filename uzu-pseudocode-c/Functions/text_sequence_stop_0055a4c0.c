// Function : text_sequence_stop
// Namespace: 
// Entry    : 0055a4c0
// Prototype: undefined text_sequence_stop(long param_1)
// Body     : 0055a4c0 - 0055a4e8


void text_sequence_stop(long param_1)

{
  *(undefined1 *)(param_1 + 0xb1) = 0;
  if (*(char *)(param_1 + 0xb2) != '\0') {
    clock_unset(*(double **)(param_1 + 0x98));
    *(undefined1 *)(param_1 + 0xb2) = 0;
  }
  return;
}


