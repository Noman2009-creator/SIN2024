#pragma once

#pragma warning(push, 0)
#define GLM_FORCE_SILENT_WARNINGS
#define GLM_ENABLE_EXPERIMENTAL
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "glm/gtx/hash.hpp"
#pragma warning(pop)


const std::string ROOT_DIR = "../../";
#define BG_COLOR 0.2f, 0.2f, 0.2f

enum class API { UNDEFINED, OPENGL, VULKAN };
enum class WindowMode { WINDOWED, FULLSCREEN };