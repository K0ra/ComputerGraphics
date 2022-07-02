// Transform.cpp: implementation of the Transform class.


#include "Transform.h"

//Please implement the following functions:

// Helper rotation function.
mat3 Transform::rotate(const float degrees, const vec3& axis) {
  mat3 m2 = mat3(
              axis.x * axis.x, axis.x * axis.y, axis.x * axis.z,
              axis.x * axis.y, axis.y * axis.y, axis.y * axis.z,
              axis.x * axis.z, axis.y * axis.z, axis.z * axis.z
            );
  mat3 m3 = mat3(
              0, -axis.z, axis.y,
              axis.z, 0, -axis.x,
              -axis.y, axis.x, 0
            );
  // m3 = glm::transpose(m3);
  mat3 rot = cos(degrees * pi / 180.f) * mat3(1.0f) + (1 - cos(degrees * pi / 180.f)) * m2 + sin(degrees * pi / 180.f) * m3;
  std::cout << "eye matrix: " << mat3(1.0f) << endl;
  return rot;
}

// Transforms the camera left around the "crystal ball" interface
void Transform::left(float degrees, vec3& eye, vec3& up) {
  // YOUR CODE FOR HW1 HERE
}

// Transforms the camera up around the "crystal ball" interface
void Transform::up(float degrees, vec3& eye, vec3& up) {
  // YOUR CODE FOR HW1 HERE
}

// Your implementation of the glm::lookAt matrix
mat4 Transform::lookAt(vec3 eye, vec3 up) {
  // YOUR CODE FOR HW1 HERE

  // You will change this return call
  return mat4();
}

Transform::Transform()
{

}

Transform::~Transform()
{

}
