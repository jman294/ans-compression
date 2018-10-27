#ifndef MODEL_H_   /* Include guard */
#define MODEL_H_

#include "util.h"

#define MODEL_LIMIT 4095

typedef int ModelData_t[sizeof(context)];

typedef struct Model {
  int code;
  const ModelData_t * data;
  int lastPrediction;
  float score;
} Model;

typedef Model * (*ModelArray_t)[2]; // A pointer to an array that contains pointers to Models

void S_MO_EnumerateAllModels (ModelArray_t mos);

void MO_New (Model * m, int code);

void MO_SetData (Model * m, const ModelData_t * data);

int MO_GetPrediction (Model * m, context context);

#endif // MODEL_H_
