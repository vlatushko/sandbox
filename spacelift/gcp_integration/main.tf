terraform {
  required_providers {
    google = {
      source = "hashicorp/google"
      version = "7.5.0"
    }
  }
}

provider google {
  # Configuration options
}

data "google_project" "project" {
}

output "project_id" {
  value = data.google_project.project.project_id
}

resource "google_cloud_run_service" "default" {
  name     = "cloudrun-srv"
  location = "us-central1"

  template {
    spec {
      containers {
        image = "us-docker.pkg.dev/cloudrun/container/hello"
      }
    }
  }

  traffic {
    percent         = 100
    latest_revision = true
  }
}
