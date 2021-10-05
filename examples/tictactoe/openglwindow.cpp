#include "openglwindow.hpp"

#include <fmt/core.h>
#include <imgui.h>

void OpenGLWindow::initializeGL() {
  auto windowSettings{getWindowSettings()};
  fmt::print("Initial window size: {}x{}\n", windowSettings.width,
             windowSettings.height);
}

void OpenGLWindow::paintUI() {
  // Our own ImGui widgets go below
  {
    // Window begin
    ImGui::Begin("Tic-Tac-Toe");
    ImGui::Columns(3);

    if (ImGui::Button("", ImVec2(100, 50))) {
    }

    if (ImGui::Button("", ImVec2(100, 50))) {
    }

    if (ImGui::Button("", ImVec2(100, 50))) {
    }

    ImGui::NextColumn();

    if (ImGui::Button("", ImVec2(100, 50))) {
    }

    if (ImGui::Button("", ImVec2(100, 50))) {
    }

    if (ImGui::Button("", ImVec2(100, 50))) {
    }

    ImGui::NextColumn();

    if (ImGui::Button("", ImVec2(100, 50))) {
    }

    if (ImGui::Button("", ImVec2(100, 50))) {
    }

    if (ImGui::Button("", ImVec2(100, 50))) {
    }

    // Window end
    ImGui::End();
  }
}