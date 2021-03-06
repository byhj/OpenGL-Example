#include <GL/glew.h>
#include "RenderSystem.h"

namespace byhj
{

RenderSystem::RenderSystem()
{

}

RenderSystem::~RenderSystem()
{

}

void RenderSystem::v_InitInfo()
{
	windowInfo.title += "Plane";
}

void RenderSystem::v_Init()
{
	const static int sw = GetScreenWidth();
	const static int sh = GetScreenHeight();

	m_Plane.Init(sw, sh);
}

void RenderSystem::v_Render()
{

	static const GLfloat black[] = { 0.0f, 0.0f, 0.0f, 1.0f };
	glClearBufferfv(GL_COLOR, 0, black);

	m_Plane.Render();

}

void RenderSystem::v_Shutdown()
{
	m_Plane.Shutdown();
}
}