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
